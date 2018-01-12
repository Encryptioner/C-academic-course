#include <stdio.h>
int main()
{
    int r,i,j,k,n;
    printf("Enter row= ");
    scanf("%d",&n);
    r=n/2;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        for(k=(r-2)*2+1-2*(i-1);k>0;k--) /* k=2*(r-i)-1 */
        {
            printf(" \t");
        }
        for(j=1;j<=i;j++)
        {
            while(j!=r)
            {
                printf("*\t");
                break;
            }
        }
        printf("\n\n");
    }
    //printf("\n");
    for(i=1;i<r;i++)
    {
        for(j=1;j<=r-i;j++)
            printf("*\t");
        for(k=1;k<=1+2*(i-1);k++)
            printf(" \t");
        for(j=1;j<=r-i;j++)
            printf("*\t");
        printf("\n\n");
    }
    return 0;
}
