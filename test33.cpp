// Default values in CPP

# include <stdio.h>

int main()
{
  int A[5];// This will give garbage
  printf("%d %d\n", A[2], A[3]);

  int B[5] = {}; // This will give zeros
  printf("%d %d\n", B[2], B[3]);

  struct A1
  {
    char name[20];
    int age;
    int wt;
  };

  A1 a = {"Tiger"};// This will give 0  0
  printf("%d %d\n", a.age, a.wt);
  
  A1 b;// This will print garbage values
  printf("%d %d\n", b.age, b.wt);

}
