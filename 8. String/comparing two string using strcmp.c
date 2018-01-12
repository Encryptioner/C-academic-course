#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100],s2[100];
    printf("Enter 1st string: ");
    gets(s1);
    printf("Enter 2nd string: ");
    gets(s2);
    //strcmp(s1,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("\n%s and %s is equal\n",s1,s2);
    }
    else if (((s1>s2)))
    {
        printf("\n%s is greater\n",s1);
    }
    else
    {
        printf("\n%s is greater\n",s2);
    }
    return 0;
}
