#include <stdio.h>
void main()
{
    int a[10],i,j,n,t;
    printf("Enter how many numbers u wanna input: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    printf("\n Sorted ascending: \n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",a[i]);
    }
}
