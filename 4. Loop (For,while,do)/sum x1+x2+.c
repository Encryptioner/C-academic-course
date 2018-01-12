#include <stdio.h>
int main()
{
    int i,n,x,sum=0;
    printf("Enter number of constant= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter a value= ");
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("\nsum= %d\n",sum);
}
