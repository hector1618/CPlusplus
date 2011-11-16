# include <iostream>
# include <stdio.h>
# include <vector>
# include <algorithm>
using namespace std;

int main()
{
  int n, tot = 0;
  float avg = 0;
  scanf("%d", &n);
  int A[n];
  int max, min;
  for(int i=0; i < n; i++)
    {
      scanf("%d", &A[i]);
      tot += A[i];
    }
  avg = tot / n;
  printf("%f\n", avg);
  float n1 = avg, p1 = avg, diff;
  
  for(int i=0; i < n; i++)
    {
      diff = A[i] - avg;
      if(diff >= 0)
	{
	  if(diff < p1)
	    {
	      p1 = diff;
	    }
	}
      else
	{
	  if(diff > n1)
	    {
	      n1 = diff;
	    }
	}
    }
  
  printf("%.0f\n", p1);
}
