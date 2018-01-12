#include <stdio.h>
int main()
{
    int r,i,j,k;
    printf("Enter row= ");
    scanf("%d",&r);
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
    return 0;
}
