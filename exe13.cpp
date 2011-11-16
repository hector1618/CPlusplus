// Find if a number is divisible my 3, without using %,/ or *. You can use atoi().
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define MAX 20

bool is_divisible(char  mystr[])
{
  char c;
  if (strlen(mystr) == 1)
    {
      int i;
      i = atoi(mystr);
      if (i == 3 || i == 6 || i == 9) return true;
      return false;
    }
  else
    {
      int t = 0;
      for(int i=0; i < strlen(mystr); i++)
	{
	  c = mystr[i];
	  t += atoi(c);
	}
      return is_divisible(itoa(t));
    }
}

int main()
{
  int n;
  char mystr[20];
  scanf("%s", mystr);
  is_divisible(mystr);  
}
