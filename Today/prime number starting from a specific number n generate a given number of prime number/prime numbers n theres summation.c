#include <stdio.h>
int main()
{
    int x,n,i,j,p,count,sum=0;
    printf("Enter starting number: ");
    scanf("%d",&x);
    printf("\nHow many prime number u wanna see? ");
    scanf("%d",&n);
    for(i=x,count=0;count<n;i++)
    {
        p=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if(p)
        {
            printf("\n%d",i);
            count++;
            sum+=i;
        }
    }
    printf("\n\nSummation of these prime number= %d\n",sum);
    return 0;
}
