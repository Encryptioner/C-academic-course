#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,r;
    printf("Enter column= ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
            printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        for(k=1;k<=r-i;k++)
            printf("*");
                printf("\n");
    }
}



