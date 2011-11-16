// Write program to swap 2 variables without using extra memory
# include <stdio.h>

main()
{
  char * p, * q;
  char var1, var2;
  p = & var1;
  q = & var2;
  printf("Enter the value of var1 \n");
  scanf("%c\n", p);
  printf("Enter the value of var2 \n");
  scanf("%c\n", q);
  printf("After swapping \n");
  q = & var1;
  p = & var2;
  printf("Var1 = %c\n", var1);
  printf("Var2 = %c\n", var2);   
}
