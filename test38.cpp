// Array of structures

# include <stdio.h>
# include <math.h>

struct emp
{
  char name[20];
  float sal;
};

int main()
{
  struct emp e[2];
  for(int i=0; i < 2; i++)
    {
      scanf("%s %f", e[i].name, &e[i].sal);
    }
  printf("%p\n",e );
  return 0;
}
