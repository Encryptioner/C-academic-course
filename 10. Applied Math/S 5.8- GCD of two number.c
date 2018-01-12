#include <stdio.h>
int main()
{
    int a,b,x,gcd,i;
    printf("Enter two positive natural number= \n");
    scanf("%d %d",&a,&b);

    if(a==0 || b==0)
    {
        printf("\nWhen any of the number is zero then always GCD is 1\n");
    }
    else
    {
        if(a>0 && a<b)
        {
            x=a;
        }
        else if(b>0 && b<a)
        {
            x=b;
        }
        for(i=0;  ;i++)  {
        //for(; x >= 1; x--)   {
        if((a%(x-i)==0) && (b%(x-i)==0))
        //if (a % x == 0 && b % x == 0)
        {
            gcd=x-i;
            //gcd=x;
            printf("\nGCD= %d\n",gcd);

            break;
        }
    }
    }
        //printf("\nGCD is %d\n",gcd);
    return 0;
}

