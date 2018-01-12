#include <stdio.h>
void badswap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n%d %d\n",a,b);
}
int main(void)
{
    int a,b;
    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);
    printf("\n%d %d\n",a,b);
    badswap(a,b);
    printf("\n%d %d\n",a,b);
}
