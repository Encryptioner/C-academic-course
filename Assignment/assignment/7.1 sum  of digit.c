#include <stdio.h>
int main()
{
    int n,sum=0,count=0;
    printf("Enter number= ");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;

    }
    printf("\nSum of digit= %d\n",sum);
    return 0;
}
