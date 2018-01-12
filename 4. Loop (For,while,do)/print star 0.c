#include <stdio.h>
int main()
{
    int i,j,m,n;
    printf("row= ");
    scanf("%d",&m);
    printf("column= ");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            printf("*\t");
        printf("\n\n");
    }
}
