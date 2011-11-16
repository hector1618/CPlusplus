//A string of alphanumeric is there.Find a string that starts with b and ends with 3 characters.
# include <iostream>
# include <stdio.h>
# include <string.h>
using namespace std;

int main()
{
  string mystr;
  getline(cin, mystr);
  int l;
  l = strlen(mystr);
  int j = -1, k = -1;
  int flag1 = 1, flag2 = 0;
  for(int i=0; i < l; i++)
    {
      if(mystr[i] == 'b' && flag1)
	{
	  j = i;
	  flag1 = 0;
	  flag2 = 1;
	}

      if(mystr[i] == '3' && flag2)
	{
	  k = i;
	}
    }

  if(j != -1 && k != -1)
    {
      for(int i=j; i < k; i++)
	{
	  printf("%c", mystr[i]);
	}
    }
  return 0;
}
