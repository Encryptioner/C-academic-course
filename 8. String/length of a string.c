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
    printf("Length of '%s' = %d",word,length);

    return 0;
}
