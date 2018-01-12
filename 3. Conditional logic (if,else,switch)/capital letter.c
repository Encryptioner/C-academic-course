#include <stdio.h>
int main()
{

    char ch;
    printf("%c\n",97);
    printf("Enter letter= ");
    scanf("%c",&ch);
    printf("%c\n",ch+2);
    if(ch>='a' && ch<='z')
        printf("%c is small letter",ch);
    else if(ch>='A' && ch<='Z')
        printf("%c is capital letter",ch);
    return 0;
}
