#include <stdio.h>/* Why output?*/
int main()
{
    int a,b,c,d;
    a=3;
    b=5;
    c=a,b;
    d=(a,b);
    printf("\nc= %d\n",c);
    printf("\nd= %d\n",d);
    return 0;
}
