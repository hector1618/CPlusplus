# include <stdio.h>
# include <string.h>
int main()
{

  char s1[100];
  char s2[100];

  gets( s1 );
  fgets( s2, sizeof(s2), stdin);
  printf("%d\n", strlen(s1));// this is 4
  printf("%d\n", strlen(s2));// but this is 5
  printf("%d\n", strlen(s1) - strlen(s2));

  int * a;
  char * c;
  *a = 20;
  *c = *a;
  printf("%c\n", *c);
  return 0;
}
