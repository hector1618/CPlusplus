#include<stdio.h>
#include<string.h>

void myFunc (int x)
{
  if (x > 0) myFunc(--x);
  printf("%d, ", x);
}

int main()
{
  myFunc(5);
  return 0;
}

// This will print 0, 0, 1, 2, 3, 4 -- Think hard
