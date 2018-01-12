#include <stdio.h>
int b=10;
int show()
{
    printf("%d",b);
    return 0;
}
int main()
{
    int a=20;b=50;
    printf("%d",b);
    show();
    return 0;
}
