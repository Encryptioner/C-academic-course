#include <stdio.h>
int main()
{
    int i,j,n;
    printf("How many row?? = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)/*mother loop. goes to last printf */
    {
        for(j=n-i;j>=0;j--)/*this loop is for space management*/
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)/*It's increment maintaining part. this loop maintains the 1st half of every row */
        {
            printf("%d ",j);
        }
        for(j=i-1;j>=1;j--)/*It's decrement maintaining part. this loop maintains the 2nd half of every row */
        {
            printf("%d ",j);
        }
        printf("\n\n");
    }
    return 0;
}

