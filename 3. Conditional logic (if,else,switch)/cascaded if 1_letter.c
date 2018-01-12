#include <stdio.h>
int main()
{
    char a,z,A,Z,letter;
    printf("Enter letter= \n");
    scanf("%c",&letter);
    if(letter >= 'a')
        {printf("s1\n");}
    else if(letter <= 'z')/*letter <= z CONDITION SHOWS every time s1. else s2 comes. but other never comes.
        what this program mean?*/
        {printf("s2\n");}
    else if(letter >= 'A')
        {printf("s3\n");}
    else if(letter <= 'Z')
        {printf("s4\n");}
    else
        {printf("none");}
return 0;
}
