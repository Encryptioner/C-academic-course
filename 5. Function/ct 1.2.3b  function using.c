#include <stdio.h>

static int a=0,b=1;/* static thakleo mai function er variable er value exist kore*/
//int func1(int a);/*function defination 1st e thakle avast virus report korar karone program return gurbage dekhai */
//int func2(int b);
int func1(int a)
{
    static int b=1;/*here same as int b*/
    b=func2(a+1)+1;
    return (b);
}
int func2(int a)
{
    return (a+1);
}


void main()
{
    int a=1,b=2;
    int count=4;
    for(count=1;count<=5;++count)/* Here count will start from 1, though previous count=4*/
    {
        b+=func1(a+1)+1;
        printf("%d\n",b);
    }
}

