# include <iostream>
# include <stdio.h>
using namespace std;

int main()
{
  int a = 16;
  cout<< "~a\t " << ~a <<endl;
  // 0 goes to -1; 16 goes to -17 and so on

  
  // Whatever comes to right of `<<` operator is power of 2
  int b = 4;
  cout<<"-1<<b\t" << (-1<<b) <<endl;
  // This will convert 16 to -16

  //To take all the bits one by one
  int x, n = 34;
  x = n;
  while(true)
    {
      cout<<x<<endl;
      if (x == 0)
	{
	  break;
	}
      x = (x - 1)&n;
    }


  //Unable to understand this
  a=3; b=1;
  a = b<<a + b>>2;
  printf("%d\n",b<<a + b>>2);
  b = b<<a + b>>2;
  printf("%d %d\n",a,b);

  return 0;    
}
