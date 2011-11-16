// Different way of defining struct

//# include <iostream>
# include <stdio.h>
# include <string.h>
# include "test33.cpp"
# define MAX 100
//using namespace std;

void f(struct emp);

struct emp
{
  char name[20];
  int age;
};

int main()
{
  struct emp e = {"Gillu", 22};
  f(e);
  printf("\n");
  return 0;
}

void f(struct emp a)
{
  printf("%s  %d\n", a.name, a.age);
}
