//Words in Reverse Order - vector
# include <iostream>
# include <vector>
# include <algorithm>
# include <string.h>
# include <stdio.h>
# define MAX 100
using namespace std;

int main()
{
  char W[MAX];
  char c;
  int i=0;
  c = getchar();
  printf("For getchar %c\n", c);
  while(i<MAX && c != '\n')
    {
      W[i] = c;
      i++;
      scanf("%c", &c);
      printf("In while loop %c\n", c);
    }

  int temp;
  int end;
  i = strlen(W) - 2;
  end = strlen(W) - 1;
  while(i >= 0)
    {
      while(isalpha(W[i])) i--;
      for(temp = i+1; temp < end; temp++)
	{
	  cout<<W[temp];
	}
      cout<<" ";
      end = i--;
    }
  cout<<endl;
  return 0;
}
