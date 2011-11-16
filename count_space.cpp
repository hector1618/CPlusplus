# include <iostream>
# include <stdio.h>
using namespace std;


int main()
{
  char * i, * p;
  char a[100];
  scanf("%s", a);
  i = &a[0];
  p = i;
  int k = 0;
  while (k < 15)
    {
      k++;
      if (isalpha(*i) || isdigit(*i))
	{
	  *p = *i;
	  p++;
	  //i++;
	}
      cout<<*p<<endl;
      i++;
      /*if (*i == ' ')
	{
	  i++;
	  }*/
    }
  return 0;
}
