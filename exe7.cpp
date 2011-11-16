//There are set of coins of {50,25,10,5,1} paise in a box.Write a program to find the number of ways a 1 rupee can be created by grouping the paise. 


# include <stdio.h>

int main()
{
  int A[101]; // For 1 paise
  int B[101];
  int C[101];
  int D[101];
  int E[101];
  int P[101];
  for(int i=0; i<101; i++)
    {
      B[i]=C[i]=D[i]=E[i]=0;
      A[i]=1;
      P[i]=0;
      if (!i%5) B[i] = 1;
      if (!i%10) C[i] = 1;
      if (!i%25) D[i] = 1;
      if (!i%25) E[i] = 1;
    }
  P[0] = 1;
}
