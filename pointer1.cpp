// Pointer arithmetic
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int a = 6;
  long int b = 60;
  char c = 'c';
  int * my_int = & a;
  char * my_char = & c;
  long int * my_long = & b;
  cout<<"int =  "<< my_int <<"\n++int= "<< my_int++ << "\n";
  //cout<<"char =  "<< my_char <<"\n++char= "<< my_char++ << "\n";
  cout<<"long int =  "<< my_long <<"\n++long int= "<< my_long++ << "\n";
  return 0;
  
}
