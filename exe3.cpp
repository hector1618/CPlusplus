// Write program to swap 2 variables without using extra memory
# include <stdio.h>

main()
{
  int * p, * q;
  int var1, var2;
  p = & var1;
  q = & var2;
  printf("Enter the value of var1 and var2 \n");
  scanf("%d %d", p, q);
  printf("After swapping \n");
  *q = var1;
  *p = var2;
  printf("Var1 = %d\n", var1);
  printf("Var2 = %d\n", var2);   
}
