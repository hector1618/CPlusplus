#include<stdio.h>
# define sq(x) (x)*(x)
# define sq1(x) x* (x + 1)
int main()
{
    int a = 4;
    printf("%d\n",sq(a + 4));
    printf("%d\n",sq1(a + a));
    return 0;
}

// See http://www.ebyte.it/library/codesnippets/WritingCppMacros.html
