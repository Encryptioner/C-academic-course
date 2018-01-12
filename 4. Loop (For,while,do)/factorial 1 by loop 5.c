#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long result=1;
    if(n==1)
        printf("factorial is 1");
    else
    {
        for(n=n;n>=1;n--)
        {
            result=result*n;
        }
        printf("factorial= %lld",result);
    }
}
