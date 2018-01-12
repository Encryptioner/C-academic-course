#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    int fact;
    //printf("Enter number= ");
    //scanf("%d",&n);
    if(n==1)
        return(1);
    else
        fact=n*factorial(n-1);
        return (fact);
}
void main()
{
    printf("factorial value of 5 is %d",factorial(5));
}
