// To define NxM matrix
#include <iostream>
#include <stdio.h>
#define N 5
#define M 5
using namespace std;

class Matrix
{
private:
  int N, M;
  int Mat[N][M];
public:
  Matrix(int n, int m);
  void define();
  void define_random(int, int, int, int);
  void print();
  //void add(int A[][], int B[][]);
  //void mul(int A[][], int B[][]);
  //int determinent(int A[][]);
  //void transpose(int A[][]);
};


Matrix::Matrix(int n, int m)
{
  N = n;
  M = m;
}

Matrix::define()
{
  int ele;
  for(int i=0, i < N, i++)
    {
      for(int j=0, j < M, j++)
	{
	  scanf("%d", &ele);
	  Mat[i][j] = ele;
	}
    }
}

Matrix::define_random(int x0=15 ,int m=128, int a=65, int c=3)
{
  for (int j=0; j < N * M; j++)
    {
      Mat[j % N][ j / N] = (a * Mat[(j - 1) % N][ j / M] + c) % m;
    }
}

Matrix::print()
{
  for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < M; j++)
	{
	  printf("%d    ", Mat[i][j]);
	}
      printf("\n");
    }
}

int main()
{
  Matrix M(4,4);
  M.define_random(50);
  M.print();
  return 0;
}
