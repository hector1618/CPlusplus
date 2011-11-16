# include <stdio.h>
# include <string.h>

int main()
{
  char str1[] = "Sample String";
  char str2[20];
  char str3[30] = "Play Hard or go home.";
  char * p;
  p = &str3[0];
  printf("%c \n", p[0]);
  strcat(p, str1);
  printf("%s \n", p);
  return 0;
}
