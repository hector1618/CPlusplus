# include <stdio.h>

// Size of pointers and size of array of pointers. Its 4 in 32 bit system
main()
{
  int *p[10];
  printf("%d %d\n",sizeof(*p),sizeof(p));
}
