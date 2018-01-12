#include <stdio.h>
int main()
{
    int a,b,t,gcd,x;
    printf("Enter two positive natural number: \n");
    scanf("%d %d",&a,&b);
    //x=b%a;/*remainder(%)mark indicates vagsesh*/
    //printf("\n%d\n",x);
    if(a==0 && b==0)
        gcd=0;
    else if(b==0)
        gcd=a;
    else if(a==0)
        gcd=b;
    else
    {
        while(a!=0)
        {
            t=a;
            a=b%a;
            b=t;
        }
        gcd=b;
    }
    printf("\nGCD is %d\n\n",gcd);
    main();
    return 0;
}
