#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("How many rows? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            for(k=1;k<i;k++)
                printf(" \t");
            for(j=n;j>=i;j--)  /*(j=1;j<=(n-i);j++)*/
                printf("*\t");

                printf("\n\n");
        }
    return 0;
}
