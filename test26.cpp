#include<stdio.h>
int main(int k)
{
    if(k<10)
        printf("%d ",main(k+1));
    return k;
}

//Error :  int main() take zero or two argument.
