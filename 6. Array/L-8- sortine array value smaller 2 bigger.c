#include <stdio.h>
int main()
{
    float a[50000],t;
    int i,j,k,n;
    printf("Array size= ");
    scanf("%d",&n);
    printf("Enter array value=\n");
    for(i=0;i<n;i++)
    {
        scanf("%g",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Your smaller to larger sorted array\n\n");
    for(i=0;i<n;i++)
    {
        printf("%g\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nYour larger to smaller sorted array\n\n");
    for(i=0;i<n;i++)
    {
        printf("%g\t",a[i]);
    }
    return 0;
}
