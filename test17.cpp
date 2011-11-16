#include<stdio.h>
int main()
{
    int a=1,b=3,c,d;
    c =(a, b);
    d = a, b, c, d;
    printf("%d %d\n",c,d);
    return 0;
}

// It prints c = b bcos of brackets and d = a
// Apperently after first assignment, it ignores anything after comma
