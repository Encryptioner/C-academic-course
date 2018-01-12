#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character= ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("\n'%c' is vowel\n",ch);
        break;
        default:
        printf("\n'%c' is consonant\n",ch);
    }
return 0;
}
