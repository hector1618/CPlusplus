# include <stdio.h>

int main()
{
  char * p;
  printf("%d \n", sizeof(p));
  return 0;
    
}
// Size of pointer. If its 4 then your comp is 32-bit. If its 16, your comp is 64-bit.
// Size of pointer is same, no matter where it points.
