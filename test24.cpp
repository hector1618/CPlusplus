#include<stdio.h>

#define print(var) printf("%s : %d\n",#var,(var))
int main()
{
    int y = 100;
    int *p;
    p = new int;
    *p = 10;
    y = y/*p; /*dividing y by *p */;
    print(y);
    return 0;
}

// Prints y : 100

// Its a good example of micros and pay attention to commenting. Its confusing without emacs i.e. on paper
