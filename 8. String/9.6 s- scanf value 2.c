#include <stdio.h>/*When there is a space\tab This program prints too..*/
int main()
{
    char ara[100];

    while(printf("Enter character= \n")&&NULL!=gets(ara))/*or '\0'.. Null isn't applicable..*/
    {
        printf("\nNow printing :\t%s\n",ara);
    }
    return 0;
}
