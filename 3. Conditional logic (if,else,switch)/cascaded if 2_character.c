#include <stdio.h>
int main()
{
    char a,z,A,Z,ch;

    printf("Enter character/digit= \n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("%c is in lower case\n",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c is in upper case\n",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit with value %d\n",ch,ch-'0');/*ch-'0' means character minus 0 what indicates %d*/
    }
    else
        {printf("none");}
return 0;
}
