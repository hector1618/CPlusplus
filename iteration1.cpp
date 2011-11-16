#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int i, n;
  //scanf("%d %d", &n, &i);
  for (int n = 10, i = 0; n > i * i; n--, i++)
    {
      printf("i = %d , n = %d \n", i, n);
    }
  return 0;
}

