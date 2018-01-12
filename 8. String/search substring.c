#include <stdio.h>
#include <string.h>
int main()
{
    char textstr[100],substr[30];
    int i,j,text_len,sub_len;
    printf(" Enter a line: ");
    gets(textstr);
    printf("\nEnter a text u wanna search: ");
    gets(substr);
    text_len=strlen(textstr);
    sub_len=strlen(substr);
    for(i=0;i<text_len-sub_len;i++)
    {
        for(j=0;j<sub_len;j++)
        {
            if(textstr[i+j]==substr[j])
            {
                continue;
            }
            else
            {
                break;
            }

        }
        if(j==sub_len)
            {
                printf("\n\tYour searched text is in the line...\n");
            }
    }
    return 0;
}
