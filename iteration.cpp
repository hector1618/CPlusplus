#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  while(n)
    {
      printf("%d", n);
      printf(" ");
      n--;
    }
  cout<<"FIRE"<<endl;
  return 0;
}
