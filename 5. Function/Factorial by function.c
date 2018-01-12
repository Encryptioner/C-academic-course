#include<stdio.h>
int factorial(int num)
{
    int i,j=1;
    for(i=1;i<=num;i++)
    {
        j=j*i;
    }
    return j;
}
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    printf("Factorial of %d is %d ",n,factorial(n));
    return 0;
}
