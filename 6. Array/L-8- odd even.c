#include <stdio.h>
void main()
{
    int i,n;
    int a[50000];
    printf("How many numbers u wanna input= ");
    scanf("%d",&n);/*if i give point value of integer, it gets value after point as 1st value of 1st array */

    if(n<=50000)
    {
        printf("Numbers of array:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("NOw,\n");
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                printf(" %d is even\n",a[i]);
            }
            else
            {
                printf("   %d is odd\n",a[i]);
            }
        }
    }
    else
    {
        printf("Out of range");
    }
}

