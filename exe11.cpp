// Give an array of size N and entries between 1 to N, find if it contains any duplicates.

# include <iostream>
# include <bitset>
using namespace std;

int main()
{
  int A[] = {3, 4, 2, 4, 2, 6, 2, 6, 1, 6};
  bitset< (int) sizeof(A)/sizeof(int) > mybit;
  mybit.set(); // set everything to 1111

  // To print array without duplicate entries.
  for(int i=0; i < sizeof(A)/sizeof(int); i++)
    {
      if(mybit[A[i]])
	{
	  cout<<A[i]<<" ";
	  mybit.set(A[i], 0); 
	}
    }
  cout<<endl;
  return 0;
}
