#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter numbers of row = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*(n-i);j++){
            printf(" ");}
        for(j=1;j<=(2*i-1);j+=2){
            printf("%d ",j);}
        {j-=2; /* 2nd loop er bracket ekhane sessh korle loop umlimited time run kore.. kothao Bracket na dileo chole. loop er niyom onushare j increment hoye 2 bere jai tai ekhane j theke 2 minus kora hoy..*/
        for(k=j-2;k>0;k-=2)
            printf("%d ",k);}

        printf("\n\n");

    }
    return 0;
}
