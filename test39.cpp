//Something about pointers
# include <stdio.h>

int main()
{
  int A[3][4] = {
    11, 12, 13, 14,
    15, 16, 17, 18,
    19, 20, 21, 22
  };

  for(int i=0; i < 3; i++)
    {
      printf("%p %p %p %p\n", &A[i][0], &A[i][1] , &A[i][2], &A[i][3]);
    }


  int B[] = {1, 2, 3, 4, 5};
  char * p;
  p = (char *) B;
  printf("%d\n", *(p + 4*sizeof(int)));
  
  return 0;


}


// 0 1 2 3 4 5 6 7 8 9 a b c d e f 
