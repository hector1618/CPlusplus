// Operator overloading
# include <iostream>
# include <stdio.h>
using namespace std;

class CVector
{
public:
  int x, y;
  CVector ();
  CVector (int, int);
  CVector operator + (CVector);
};

CVector::CVector() // Null constructor
{
}

CVector::CVector(int a, int b)
{
  x = a;
  y = b;
}

CVector CVector::operator + (CVector temp1)
{
  CVector temp;
  temp.x = x + temp1.x;
  temp.y = y + temp1.y;
  return temp;
}

int main()
{
  CVector A(3, 5);
  CVector B(1, 2);
  CVector C;
  C = A + B;
  cout<<C.x<<"\t"<<C.y<<endl;
  return 0;
}
