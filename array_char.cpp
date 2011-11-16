//Array of char
#include <iostream>
#include <stdio.h>
using namespace std;

void print(char C[], int k)
{ 
  for (int i = 0; i < k; i++)
    {
      cout<<C[i]<<" ";
    }
  cout<<endl;
}

int main()
{
  char C[10] = "Hello";
  char C1[] = "World";
  char C2[15] = "Hello World";
  print(C, 10);
  print(C1, 5);
  print(C2, 15);
  return 0;
}
