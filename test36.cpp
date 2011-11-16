# include <stdio.h>

int main()
{
  int a = 10, b;
  a >= 5 ? b = 100 : b = 200;
  printf("%d\n", b);
  char str[] = "Dang-Gillu-Me";
  printf(a > 10 ? "%d\n" : "%c\n", str[0]);
  return 0;
}
