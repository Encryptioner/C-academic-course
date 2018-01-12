#include <stdio.h>
int main()
{
    int a;
    int b;
    a=200,b=400;
    int *ax;
    int *bx;
    //ax=&a;
    //bx=&b;
    *ax=&a
    *bx=&b;

    printf("a = %d \n",a);
    printf("b = %d \n",b);
    printf("ax = %d \n",ax);
    printf("bx = %d \n",bx);
    printf("*ax = %d \n",*ax);
    printf("*bx = %d \n",*bx);
}
