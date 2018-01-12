#include <stdio.h>
int main()
{
    int a[15];
    int n,i,j,min=0,x=0;
    printf("How many number : ");
    scanf("%d",&n);
    printf("\nEnter number : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[i];
        x=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                x=j;
            }
        }
        a[x]=a[i];
        a[i]=min;
    }
    printf("\nSorted in ascending order...\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
