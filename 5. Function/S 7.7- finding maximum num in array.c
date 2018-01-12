#include <stdio.h>

double find_max(double ar[],int n);

int main()
{
    double ara[20];
    int i,n;
    printf("How many number u wanna input in this array: ");
    scanf("%d",&n);
    printf("\nInput %d num : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&ara[i]);
    }
    double max=find_max(ara,n);
    printf("\n\nMaximum number in array is %0.2lf\n",max);
    return 0;
}

double find_max(double ar[],int n)
{
    int i;
    printf("\nShowing Here\n");
    for(i=0;i<n;i++)
    {
        printf("%0.2lf\t",ar[i]);
    }
    double max=0;
    for(i=0;i<n;i++)
    {

        if(ar[i]>max)
        {
           max=ar[i];

        }
    }
    return max;
}
