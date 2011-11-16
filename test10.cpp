# include <stdio.h>

int main()
{
  printf("%d",printf("%d%d",1,1) & printf("%d%d", 0,0));
  printf("%d",printf("%d%d",1,1) & printf("%d",1));

  printf("%d\n",printf("%d",printf("%d",i)));
  // This will print 999941 for the input 9999

  return 0;
}

// It will print 11002. 11 and 00 are understood. Now printf(), on success returns the total number of characters written is returned. On failure, a negative number is returned.
// And hence 2 & 2 = 2 as the last digit.

// And same explanation goes for second output 11-1-0
