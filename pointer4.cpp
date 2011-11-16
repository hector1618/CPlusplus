// Pointers to function
# include <iostream>
# include <stdio.h>
using namespace std;

int operation(int x, int y, int (* function)(int ,int))
{
  int g;
  g = (* function)(x, y);
  return g * g;
}

int add(int x, int y)
{
  return x + y;
}

int sub(int x, int y)
{
  return x - y;
}

int main()
{
  int a = 10, b = 4;
  int m;
  m = operation(a, b, add);
  cout<<m<<endl;
  return 0;
}
