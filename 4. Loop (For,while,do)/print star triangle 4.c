#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,r;
    printf("Enter column= ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=r-i;j>0;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
                printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=r-i;k>0;k--)
            printf("*");
                printf("\n");
    }
}

