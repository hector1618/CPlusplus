# include <stdio.h>

int main()
{
  int x = 3;
  switch(x)
    {
      printf("Start\n"); // This will print nothing
    default : printf("Default\n");
    case 1 : printf("One\n");
    case 2*2 + 4 : printf("Two\n");
    }

  // This also works
  switch(x)
    {
    }
  return 0;
}


// This will print - "Default One Two". If dafault is on the top, one should put ``break`` in each case.
