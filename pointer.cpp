// Pointers to array
# include <iostream>
# include <stdio.h>
using namespace std;

void print(int A[],int k)
{
  for (int i = 0; i < k; i++)
    {
      cout<<A[i]<<" ";
    }
  cout<<endl;
}

int main()
{
  int a;
  int  * p;
  p = & a;
  //scanf("%d", &a);
  //cout<<"p = "<<p<<endl;
  //cout<<"*p = "<<*p<<endl;

  int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int B[] = {00, 11, 22, 33, 44, 55, 66, 77, 88, 99};
  print(A, 10);
  p = A; // Another way is p = &A[0]
  print(p, 10);
  *p = 10;
  print(p, 10);
  p++;
  print(p, 9);
  p = &A[3];
  print(p, 6);
  p = A + 4;
  print(p, 4);
  *(p + 1) = 50;
  print(A, 10);
  p = A;
  *(p + 4) = 12;
  print(A, 10);
  cout<<*(p + 3)<<endl;
  cout<<*p + 3<<endl;
  return 0;
}
