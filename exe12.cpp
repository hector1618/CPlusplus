// Count the number of 1 in binary representation of a number

# include <stdio.h>

int main()
{
  int n = 32;
  scanf("%d", &n);
  int count = 0;
  while(n)
    {
      if (n & 0x1) count++;
      n = n>>1;
      printf("%d\n", n);
    }
  printf("%d\n", count);
  return 0;
}
