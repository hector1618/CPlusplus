// void pointers
# include <iostream>
# include <stdio.h>
using namespace std;

void increase(void * data, int psize)
{
  if (psize == sizeof(char))
    {
      char * pchar;
      pchar = (char *) data;
      ++(*pchar);
    }
  
  if (psize == sizeof(int))
    {
      int * pint;
      pint = (int *) data;
      *pint += 1;
    }

}

int main()
{
  char a = 'x';
  int b = 1602;
  increase(& b, sizeof(b));
  cout<<b<<endl;
  increase(& a, sizeof(a));
  cout<<a<<endl;
  return 0;
}
