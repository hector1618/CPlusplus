
#include<stdio.h>
typedef struct s
{
    int a[10];
}s;
typedef struct t
{
    int *a;
}t;

int main()
{
    s s1,s2;t t1;
    s1.a[0]=0;

    t1.a=s1.a;
    s1.a[0]++;
    s2=s1;
    s1.a[0]++;

    printf("%d %d %d",s1.a[0],s2.a[0],t1.a[0]);
    return 0;
}
