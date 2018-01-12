#include <stdio.h>//How??
int main()
{
    int i,j,k,r;
    printf("Enter row= ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    for(i=1;i<=r-1;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=1;k<=-i+r;k++)
            printf("* ");
        printf("\n");
    }
}
