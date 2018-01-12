#include <stdio.h>
int Factorial(int num)
{
    int i,k=1;
    for(i=1;i<=num;i++)
    {
        k=k*i;
    }
    return k;
}
int main()
{
    int factorial,n;
    printf("number= ");
    scanf("%d",&n);
    factorial=Factorial(n);
    printf("factorial of %d is %d",n,factorial);
    return 0;
}
