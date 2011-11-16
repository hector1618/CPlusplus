# include <iostream>
using namespace std;

class Sample
{
public:
  int *ptr;
  Sample(int i)
    {
      ptr = new int(i);
    }
  ~Sample()
    {
      delete ptr;
    }
  void PrintVal()
    {
      cout << "The value is " << *ptr;
    }
};


void SomeFunc(Sample x)
{
  x.PrintVal();
  cout << "\n Say i am in someFunc " << endl;
}

int main()
{
  Sample s1= 10;
  SomeFunc(s1);

  // Following will show an run time error.

  s1.PrintVal();

  /* As the object is passed by value to SomeFunc the destructor of the object is
called when the control returns from the function. So when PrintVal is called it meets up
with ptr that has been freed. To overcome this problem we have to pass value by reference 
in function i.e. writting - void SomeFunc(Sample &x) */
  
  return 0;
}
