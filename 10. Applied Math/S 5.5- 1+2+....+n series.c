#include <stdio.h>
int main()
{
    int n,i;
    printf("1+2+.....+n=\n Here, n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d",i);
        while(i==n)
        {

            printf(" = %d",(n*(n+1))/2);
            break;
        }
        if(i<n)
        printf(" +");
    }
    return 0;
}
