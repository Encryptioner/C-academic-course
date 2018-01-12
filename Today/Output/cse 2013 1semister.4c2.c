#include <stdio.h>
void main()
{
    int a;
    static char c[]="Programming with c can be great fun!";
    for(a=0;c[a]!='\0';++a)
        if(a%2==0)
        printf("%c%c",c[a],c[a]);
}
