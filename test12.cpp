#include<stdio.h>
int main()
{
  int a=1;
  switch(a)
    {
    case '1':
      printf("ONE\n");
      break;
    case '2':
      printf("TWO\n");
      break;
    default:
      printf("NONE\n");
    }
  return 0;
}


// This will show nothing because test cases are given in Char and a is int
