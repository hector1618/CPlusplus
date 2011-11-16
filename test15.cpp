#include<stdio.h>
int main()
{
  int x = 2;
  int y = 5;
  printf("%d\n", x*y + 1); // This will print 11
  printf("%d  %d\n", (x*y + 1), ++y*x); // But this will print 13 and 12

  int i = 9999;
  printf("%d\n",printf("%d",printf("%d",i)));
  return(0);
}
