#include <stdio.h>
main()
{
    int i=0;
    printf("%d %d\n",scanf(" %d",&i),i);
    printf("%d %d\n",i=4,i);
}


// For 45, it print
// 1 0
// 4 45

// For scanf
// Return Value
// On success, the function returns the number of items successfully read. This count can match the expected number of readings or fewer, even zero, if a matching failure happens.
// In the case of an input failure before any data could be successfully read, EOF is returned.
