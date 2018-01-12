#include <stdio.h>
int max(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
            return x;
        else
            return z;
    }
    if(z>y)
    {
        if(z>x)
            return z;
        else
            return x;
    }
    else
        return y;
}
int main()
{
    int a,b,c;
    printf("Enter numbers= ");
    scanf("%d%d%d",&a,&b,&c);
    printf("maximum= %d",max(a,b,c));
    return 0;
}
