
// Declaration of pointers to a function
# include <stdio.h>

void fun()
{
  printf("L and C\n");
}

int main()
{
  void (*p)() = fun;
  (*p)();
  return 0;
}
