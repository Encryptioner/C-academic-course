#include <stdio.h>
int main()
{
    int a;
    printf("The number= ");
    scanf("%d", &a);
    if(a<50)
    {
        printf("a is less than 50");
    }
    printf("\nNow,");
    if(a%2!=0)
    {
        printf("\nThe number is odd");
    }

    else
    {
        printf("\nThe number is even");
    }
    printf("\nValue of a is %d\n", a);
    return 0;
}
