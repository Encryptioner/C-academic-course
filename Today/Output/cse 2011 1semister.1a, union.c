#include <stdio.h>
int main()
{
    union u;
    {
        int i;
        char ch[2];
    }
    union u;
    u.ch[0]=3;
    u.ch[1]=2;
    printf("%d %d %d\n",u.ch[0],u.ch[1],u.i);
    return 0;
}
