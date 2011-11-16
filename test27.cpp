#include<stdio.h>
main()
{
    int i = 4;
    printf("%d %d %d",++i,i++,i*i);
    // It goes till end before executing anythong
    // so, it will print 16 ( at 3rd place ) then 4 ( at 2nd and modifies i to 5) then 6
    // Output - 6, 4, 16
    printf("\n");
    printf("%d %d %d\n",i*i,++i,i++);
    // Now, 6 at last ( changing i to 7 after printing), then 8 (changing i before printing) and finally 8*8.
    return 0;
}
