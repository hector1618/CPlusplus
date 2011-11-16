# include <stdio.h>
# include <string.h>

main()
{
  char a[10];
  strcpy(a,"\0");
  if (a==NULL)
    printf("a is null %d \n", strlen(a));
  else
    printf("a is not null %d \n", strlen(a));
}
