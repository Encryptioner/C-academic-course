#include <stdio.h>
int main()
{
    int x,y,value;
    x=1;
    y=x;
    x=2;
    printf("y= %d",y);
    value=printf("y= %d",y);
    return 0;
}
