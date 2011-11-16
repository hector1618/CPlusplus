// Defining complex multiplication of two complex no.s
// Overloading the operator *
# include <iostream>
using namespace std;

class Complex_no
{
public:
  int a, b;
  Complex_no ();
  Complex_no (int, int);
  Complex_no operator * (Complex_no);
};

Complex_no::Complex_no()
{
}

Complex_no::Complex_no(int x, int y)
{
  a = x;
  b = y;
}

Complex_no Complex_no::operator * (Complex_no C)
{
  Complex_no temp;
  temp.a = a * C.a - b * C.b;
  temp.b = a * C.b + b * C.a;
  return temp;
}

int main()
{
  Complex_no A(3, 4);
  Complex_no B(2, 1);
  Complex_no D;
  D = A * B;
  cout<<D.a<<"\t"<<D.b<<endl;
  return 0;
}
