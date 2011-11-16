// Product of two polynomials when represented in array
# include <stdio.h>

int main()
{
  int A[] = {1, -2, 1};
  int B[] = {1, -4};
  int C[] = {0, 0, 0, 0, 0};

  for(int i=0; i<3; i++)
    {
      for(int j=0; j<2; j++)
	{
	  C[i+j] += A[i] * B[j];
	}
    }

  int i=0;
  for(i=0; i < 5; i++)
    {
      printf("%d ", C[i]);
    }
  printf("\n%d\n", i);
  return 0;
}
