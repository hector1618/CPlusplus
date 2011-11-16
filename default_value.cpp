#include <iostream>
#include <stdio.h>
using namespace std;

int divide(int a, int b=2)
{
  return a/b;
}

int main()
{
  printf("%d \n", divide(12));
  printf("%d \n", divide(13,3));
  return 0;
}
