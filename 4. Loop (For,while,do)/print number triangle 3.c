#include <stdio.h> /* different form of print number triangle 2 */
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
        for(j=1;j<=i;j++)/* or for(j=1;j<=(2*i-1);(j=j+2)) */
        {
            printf("%d ",(2*j-1));
        }
        for(j=2*i-3;j>=1;(j=j-2))
        {
            printf("%d ",j);
        }
        printf("\n\n");
    }
    return 0;
}


