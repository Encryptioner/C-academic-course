#include <stdio.h>
int reverse(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    return r;

}
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    printf("%d",n);
    printf("\nReverse of %d is %d\n ",n,reverse(n));

}
