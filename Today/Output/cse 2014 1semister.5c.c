#include <stdio.h>
int fun (int count);
void main()
{
    int a,count;
    for(count=1;count<=5;++count)
    {
        a=fun(count);
        printf("%d\n",a);
    }
}
fun(int x){
    static int y=0;
    y+=x;
    return (y);
}
