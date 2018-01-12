#include <stdio.h>
int main()
{
    int i,j,n;
    printf("How many row?? = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++) /* or for(j=n-i;j>=0;j--)  */
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
