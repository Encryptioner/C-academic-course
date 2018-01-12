#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter row: ");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=n;j>=i;j--) /*same (j=1;j<=(n-i+1);j++) */
                printf("*\t");
                printf("\n\n");
        }
}

