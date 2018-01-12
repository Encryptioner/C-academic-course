#include <stdio.h>
void main()
{
    int i,n;
    float a[50000],sum=0;
    printf("How many numbers u wanna input= ");
    scanf("%d",&n);
    if(n<=50000)
    {
        printf("Numbers of array:\n");
        for(i=0;i<n;i++)
        {
            scanf("%g",&a[i]);
        }
        printf("\nvalue of a[500]= %g\n",a[500]);/*array input na kora ongshe 0 assign kore rakhe*/
        printf("NOw,\n");
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        printf(" sum is %g\n",sum);
        printf("average is %g\n",(sum/n));
    }
    else
    {
        printf("Out of range\n");
    }
}

