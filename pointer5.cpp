// Passing the array by reference and modifying it
# include <stdio.h>

void square(int A[], int k)
{
  for(int i=0; i < k; i++)
    {
      A[i] = A[i] * A[i];
    }
}

void print(int A[], int k)
{
  for(int i=0; i < k; i++)
    {
      printf("%d   ", A[i]);
    }
  printf("\n");
}

int main()
{
  int A[] = {1, 3, 4, 1, 4, 12};
  print(A, 6);
  square(A, 6);
  print(A, 6);
  return 0;
}
