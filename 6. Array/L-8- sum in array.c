#include <stdio.h>
void main()
{
    int i,n;
    float a[50],b[50],c[50];/*%g and %f get 6 value after point*/
    printf("How many numbers u wanna input= ");
    scanf("%d",&n);/*if i give point value of integer, it gets value after point as 1st value of 1st array */
    //c[i]=a[i]+b[i];/*shows problem*/
    if(n<=50000)
    {
        //c[i]=a[i]+b[i];/*shows problem*/
        printf("Numbers of 1st array:\n");
        for(i=0;i<n;i++)
        {
            scanf("%g",&a[i]);
        }
        printf("Numbers of 2nd array:\n");
        for(i=0;i<n;i++)
        {
            scanf("%g",&b[i]);
        }

        printf("1st array + 2nd array = \n");
        for(i=0;i<n;i++)
        {
            c[i]=a[i]+b[i];
            printf(" %g + %g = %g\n",a[i],b[i],c[i]);
        }

    }
    else
    {
        printf("Out of range");
    }
}

