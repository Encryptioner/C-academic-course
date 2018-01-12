#include <stdio.h>
int main()
{
    int n,i,pack;
    printf("Enter positive number= ");
    scanf("%d",&n);
    if(n<2)
        pack=0;
    else
        pack=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            pack=0;
    }
    if(pack==0)
        printf("\nNot prime\n");
    else
        printf("\nPrime\n");
}
