#include <stdio.h>
int main()
{
    char name[50];
    FILE *fin,*fo;
    fin=fopen("input.txt","r");
    fo=fopen("fibo.txt","w");
    fgets(fin,name);
    printf("%s",name);
    return 0;
}
