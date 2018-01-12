#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char str[3][4]={
        {'b','c','\0'},
        {'s','\0'},
        {'n','g','x','\0'}
        };
    //printf("Enter string: ");
    //gets(str);
    l=strlen(str);
    printf("\n%d\n",l);
    printf("%s",str);
    return 0;
}
