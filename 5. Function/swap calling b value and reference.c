#include <stdio.h>

void exchange_by_pointer (int *a,int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=temp;
    printf("After call and exchange by reference- \n");
    printf("a= %d\n",*a);
    printf("b= %d\n",*b);
}

void exchange_by_value (int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After call and exchange by value- \n");
    printf("a= %d\n",x);
    printf("b= %d\n",y);
}

int main()
{
    int a=9,b=6;
    printf("Input value of a & b= ");/* if i don't use printf n scanf here, the code doesn't execute*/
    scanf("%d%d",&a,&b);
    printf("Actual value of- \n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    exchange_by_value(a,b);
    exchange_by_pointer(&a,&b);
    return 0;
}
