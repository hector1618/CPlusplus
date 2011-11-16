// Pointers to pointers
# include <iostream>
# include <stdio.h>
using namespace std;

int main()
{
  int a = 4;
  int * p = & a;
  int ** q = & p;
  cout<<"a = "<<a<<endl;
  cout<<"p = "<<p<<endl;
  cout<<"q = "<<q<<endl;
  cout<<sizeof(a)<<endl;
  cout<<sizeof(p)<<endl;
  int A[] = {1, 2, 3, 4, 'c'};
  cout<<sizeof(A)<<endl;
  return 0; 
  
}
