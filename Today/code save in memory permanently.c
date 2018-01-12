#include<stdio.h>

int main()
{
    static int *ptr, x;
    int y;

    x=156;

    ptr=&x;

    printf("x = %d\n",x);
    printf("&x = %d\n",ptr);
    printf("x = %d\n",*ptr);

    printf("Enter Number : ");
    scanf("%d",&y);

    if(y==*ptr)
    {
        printf("\nok\n");
    }
    else
    {
        printf("\nWrong\n");
    }

    return 0;
}
