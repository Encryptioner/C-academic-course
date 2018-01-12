#include <stdio.h>
void swap1(int *,int *);
//void swap2(int *m,int *n);

void main()
{
    int a=6,b=15;
    swap1(&a,&b);
}
void swap1(int *m;int *n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
    printf("a= %d, b=%d",m,n);
}
