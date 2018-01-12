#include <stdio.h>
#include <string.h>
int main()
{
    int i,length=0;
    char word[100];
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
        printf("%c",word[i]);
    }

    return 0;
}

