#include <stdio.h>/*here i wanna do the 1st program in a function.. n do it with string function */
#include <string.h>
int main()
{
    int i,length=0;
    char country[100];
    gets(country);
    strlen(country);
    for(i=0;i<100;i++)
    {
        if(country[i]!='\0')
        {
            length++;
        }
        else
        {
            break;
        }

    }
    printf("Length= %d",length);
    return 0;
}
