#include <stdio.h>
int main()
{
    int mark;
    printf("Enter number= ");
    scanf("%d",&mark);
    printf("\n%s\n",(mark>=60) ? "1st division":
           (mark>=45) ? "2nd division":
           (mark>=33) ? "3rd division":
           "Congratz! Fail!");
return 0;
}

