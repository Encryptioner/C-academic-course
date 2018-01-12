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
int count(int n)
{
    int c;
    for(c=0;n>10;c++)
    {
        n=n/10;
    }
    return c+1;
}
int main()
{
    int n;
    printf("Enter Number= ");
    scanf("%d",&n);
    printf("\n%d\n",count(n));
    printf("\nReverse of %d is %d\n ",n,reverse(n));
    return 0;
}

