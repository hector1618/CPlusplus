//Find the one non repeating number in a huge array
# include <stdio.h>

int main()
{
  int A[] = {3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9, 9};
  int t = 0;
  for(int i=0; i < 13; i++)
    {
      t = t ^ A[i];
    }
  printf("%d\n",t);
  return 0;

}
