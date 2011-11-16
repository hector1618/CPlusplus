#include<stdio.h>

int main()
{
    char c;
    // This condition can be written as c = ( getchar() != '\n' ) and hence `c` will get True 
    // and hence will pring 1111 for the input 'abcd'. 
    while(c=getchar()!='\n')
        printf("%d",c);

    
    printf("\n%d\n",'a');
    // This will print 97 for a, 98 for b and so on.
    printf("%d\n",'A');
    // This will print 65 for A, 66 for B and so on.
    printf("%d\n",'1');
    // This will print 49 for '1', 50 for '2' and so on.

    //And it all work vice-versa also
    printf("%c\n", 97); // For a
    printf("%c\n", 65); // For A
    printf("%c\n", 49); // For '1'


    // Now follwoing c1 takes \101 as octave representation of 101 of 65 and hence will output `A`
    char c1 = '\101';
    printf("%c\n", c1);

    return(0);
}
