# include <iostream>
using namespace std;

int main()
{
  bool b;
  b = false;
  cout<< boolalpha << b <<endl; // Print ture
  cout<< noboolalpha << b <<endl; // Print 1
  
  int n = 70;
  cout<< dec << n <<endl;
  cout<< hex << n <<endl;
  cout<< oct << n <<endl;
  
  double a = 3.141587434;
  cout.precision(5);
  cout<< a <<endl;
  cout<< fixed << a <<endl;
  cout<< scientific << a <<endl;
  
  cout<< setw(10);
  cout<< 77 <<endl;
  cout<< nouppercase << 77 <<endl;
  return 0;
}
