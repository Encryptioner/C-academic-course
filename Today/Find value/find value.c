#include <stdio.h>

int main()
{
    int v,n;
    v=5/2+14%3*2;/*  2+2*2   */
    n=56%3*8/2*2-9/5*2+13%7/3;/*  (2*4*2)-2+(6/3)    */
    printf("value= %d \n",v);
    printf("value= %d \n",n);

    int a=6,b=15,c=-5;

    if(a==c||b>a)
        printf("t1");
    else
        printf("f1");
    if(a+5<b&&a>c)
        printf("t2");
    else
        printf("f2");

    int x=10,y=20,z=15,k=0;

    if(x>y) /* { */
        if(y>z)
        k=k+x;
    else
        k=k+y; /* } */
    printf("\nk=%d",k);

    return 0;
}
