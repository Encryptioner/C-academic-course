#include <stdio.h>// A way to know the ASCII value of a number. The problem is u can know only 0-9 by this  method//
int main()
{
    int num,i;
    printf("How many times u wanna run d loop: ");
    num=getchar();
    for(i=0;i<num;i++)
    {
        puts("looping");
    }
    printf("the loop run %d times",num);
    printf("ASCII value is %d",num);
    return 0;
}
