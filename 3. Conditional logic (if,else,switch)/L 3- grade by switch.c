#include <stdio.h>
int main()
{
    char grade;
    printf("Enter grade= ");
    scanf("%c",&grade);
    switch (grade){
    case 'A':
            printf("Excellent\n");
            break;
    case 'B':
            printf("Very good\n");
            break;
    case 'C':
            printf("Well done\n");
            break;
    case 'D':
            printf("Passed\n");
            break;
    case 'F':
            printf("OK. Try again\n");
            break;
    default:
            printf("Invalid grade\n");
    }
    printf("Your grade is %c\n",grade);
return 0;
}
