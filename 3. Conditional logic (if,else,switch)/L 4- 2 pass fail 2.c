#include <stdio.h>
int main()
{
    int  a;
    printf("Enter number= ");
    scanf("%d", &a);
    printf("\n%s\n", (a>=40) ? "Pass":"Congratz! Fail!");
return 0;
}
