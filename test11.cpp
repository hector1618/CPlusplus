# include <stdio.h>

int main()
{
  int i=10;
  do
    {
      printf("%d\n",i);
      i++;
      if(i < 15)
	continue;
    }while(false);
  return 0;	
}

// It will print first value of i and then quit the loop because in do-while loop, the values in branckets will be executed first and the loop condition will be evaluated later.


