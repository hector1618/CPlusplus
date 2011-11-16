// Dynamic memory
# include <iostream>
using namespace std;

int main()
{
  int * p, k;
  p = new int [5];
  for (int i=0; i < 5; i++)
    {
      cin>>k;
      p[i] = k;
    }
  for (int i=0; i < 5; i++)
    {
      cout<<p[i]<<" ";
    }
  cout<<endl;
  delete [] p;
  return 0;
}
