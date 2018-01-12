#include <stdio.h>

int main()
{
    int i,j,digit=0;
    unsigned long long array[50];
    unsigned long long n,num,dec=0;

    printf("Enter a unsigned int Binary number : ");
    scanf("%lld",&n);
    num=n;

    while(num>0)
    {
        num=num/10;
        digit++;
    }
    printf("\nDigit = %d\n",digit);

    for(i=digit-1;i>=0;i--)
    {
        array[i]=n%10;
        n/=10;
    }
    printf("\nNumber in array = ");
    for(i=0;i<digit;i++)
    {
        printf("%lld",array[i]);
    }
    printf("\n\n");

    for(i=0;i<digit;i++)
    {
        for(j=1;j<(digit-i);j++)
        {
            array[i]=2*array[i];
        }
        //printf("\n\narray[%d] = %d\n\n",i,array[i]);
    }
    for(i=0;i<digit;i++)
    {
        dec=dec+array[i];
    }
    printf("\n\nConverted Decimal number = %d\n\n",dec);
    return 0;
}
