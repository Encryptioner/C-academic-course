#include <stdio.h>
int main()
{
    int r,i,j,k,n;
    printf("Enter row= ");
    scanf("%d",&n);
    r=n/2;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");

        }
        for(k=1;k<=2*(r-i)+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<r;i++)
    {
        for(j=r-i-1;j>0;j--)
        {
            printf(" ");

        }
        for(k=1;k<=2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

