#include <stdio.h>
#include <math.h>

int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    else
    {
        f=n*fact(n-1);
        return f;
    }

}

int main()
{
    FILE *fin,*fo;
    fin=fopen("data.txt","r");
    fo=fopen("fact.txt","w");

    int x;
    fscanf(fin,"%d",&x);
    fprintf(fo,"factorial of %d is %d\n",x,fact(x));
    return 0;
}
