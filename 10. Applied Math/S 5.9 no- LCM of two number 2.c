#include <stdio.h>
int main()
{
    int a,b,a1,b1;
    printf("Enter two positive number:\n");
    scanf("%d",&a);
    if(a>0)
    {
        int i=2;
        for(;i<=a;i++)
        {
            printf("%d ",factorize(i,a));
        }
    }
    return 0;
}
int factorize (int i, int a)
{
    if(a%i==0)
    {
        return i;
    }
    else
    {
        return (i=i+1);
    }
}
