#include <stdio.h>//How ??? not ok
#include <string.h>
int main()
{
    int i,length=0;
    char word[100],z[100];
    printf("Enter string: ");
    gets(word);
    for(i=0;i<100;i++)
    {
        if(word[i]=='\0')
        {
            break;
        }
        length++;
    }
    for(i=length;i>=0;i--)
    {
        z[100]=("%c",word[i]);
    }
    strcmp(word[100],z[100]);
        printf("palindrome");

    return 0;
}

