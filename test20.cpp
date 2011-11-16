#include<stdio.h>
#include<iostream>
int array[]={1,2,3,4,5,6,7,8};
#define SIZE1 10
#define SIZE (sizeof(array)/sizeof(int))

int main()
{
    printf("%d",SIZE);
    printf("%zu",sizeof(SIZE));
    if(-1<=SIZE) printf("\nTrue");
    else printf("\n2");
    return 0;
}
