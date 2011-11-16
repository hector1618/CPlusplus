# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <vector>
# include <algorithm>
# define MAX 20
using namespace std;

int main()
{
  int A[MAX];
  for(int i=0; i<MAX; i++)
    {
      A[i] = rand() % 10 + 1;
    }
  for(int i=0; i<MAX; i++)
    {
      printf("%d ",A[i]);
    }
  printf("\n");
  return 0;
}
