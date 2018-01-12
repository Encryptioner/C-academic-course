#include<iostream>
#include<cstdio>

int dec_to_bin()
{
    int i,count=0;
    bool array[50];
    unsigned long long n;

    printf("Enter a unsigned int decimal number : ");
    scanf("%lld",&n);

    for(i=0;i<50;i++)
    {
        array[i]=n%2;
        n=n/2;

        if(n/2==0)
        {
            array[i+1]=n%2;
            break;
        }
        count++;
    }
    printf("\n\n#Digit in Binary = %d\n",count+1);
    printf("\n#Binary converted number = ");

    for(i=count+1;i>=0;i--)
    {
        printf("%d",array[i]);
        //cout<<array[i];
    }
    printf("\n\n\n");
    return dec_to_bin();
}
int main()
{
    dec_to_bin();
    return 0;
}

