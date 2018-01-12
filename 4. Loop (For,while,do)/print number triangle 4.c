#include <stdio.h>// I wanna start from 10 instead of 1//
int main()
{
    int i,j,n;
    printf("How many row?? = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)/*mother loop. goes to last printf */
    {
        for(j=n-i;j>0;j--)/*this loop is for space management*/
        {
            printf("  ");
        }
        for(j=(2*i-1);j>=1;(j=j-2))
        {
            printf("%d ",j);
        }
        j+=4;
        for(;j<=(2*i-1);(j=j+2))
        {
            printf("%d ",j);
        }
        printf("\n\n");
    }
    return 0;
}



