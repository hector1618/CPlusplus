#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="aaa";
    char *b;
    char c[]= "bbb";
    b = &c[0];
    strcpy(a,"cc");
    printf("%s\n",a);
    strcpy(b,"dd");
    printf("%s\n",b);
    return 0;
}
