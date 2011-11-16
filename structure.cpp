// structures
# include <iostream>
# include <stdio.h>
using namespace std;

struct node
{
  int a;
  node * p;
};

int main()
{
  node n1, n2;
  n1.a = 4;
  n1.p = new node;
  //n1.p = & n2;
  //n2.a = 5;
  //n2.p = 0;
  n1.p->a = 6;
  n1.p->p = 0;
  cout<<n1.a<<endl;
  cout<<n1.p<<endl;
  cout<<n1.p->a<<endl;
  cout<<n1.p->p<<endl;
  cout<<&(n1.p->a)<<endl;
  return 0;
}
