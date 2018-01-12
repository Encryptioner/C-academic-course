#include <stdio.h>
#include <string.h>
int main()
{
    int i,length=0,count=0;
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
    for(i=0;i<length;i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' ||
           word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U' )
        {
            count++;
        }
    }
    printf("vowel= %d",count);
    return 0;
}
