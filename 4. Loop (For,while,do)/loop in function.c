#include <stdio.h>
void numbers(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        numbers(b-(a+2),a);
    }
    else if(a<b)
    {
        numbers(a-(b*2),a);
    }
    else
        printf("No comment");
}
void numbers(int i,int j)
{
    int k;
    for(k=i;k<=j;k++)
        printf("%d\t",k);
}
