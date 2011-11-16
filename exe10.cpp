// To find the subarray with the maximum sum in an given array

# include <stdio.h>

int max(int a, int b)
{
  if(a > b)
    return a;
  else
    return b;
}

int main()
{
  int A[]  = {4, 10, -2, 1, -3, 4, -1, 2, 1, -5, 4};
  int max_array_so_far = 0;
  int max_array_end_here = 0;
  for(int i=0; i < sizeof(A)/sizeof(int); i++)
    {
      max_array_end_here = max(0, max_array_end_here + A[i]);
      max_array_so_far = max(max_array_so_far, max_array_end_here);
    }
  printf("%d\n", max_array_so_far);
  return 0;

}
