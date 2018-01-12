#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number limit to know even number:\nUpper limit & Lower limit=\n");
    scanf("%d%d",&i,&j);
    printf("even number from %d to %d=\n",i,j);
    n=i-2;
    while(n<=j)
    {
        n++;
        if(n%2!=0)/*if(n%2==0) prints odd number */
        {
            continue;
        }
        if(n>=i & n<=j)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}
