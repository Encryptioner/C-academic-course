#include <stdio.h>

int fibo(int n)
{
    int f;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
    {
       f=fibo(n-1)+fibo(n-2);
       return f;
    }
}

int main()
{
    FILE *fin,*fo;
    fin=fopen("input.txt","r");
    fo=fopen("fibo.txt","w");

    int x,i;
    fscanf(fin,"%d",&x);
    fprintf(fo,"1st %d fibonacci number is \n\n",x);
    for(i=0;i<x;i++)
    {
        fprintf(fo,"%d\n",fibo(i));
        printf("%d\n",fibo(i));
    }

    return 0;
}
