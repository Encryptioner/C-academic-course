#include <stdio.h>
int main()
{
    int a;
    printf("Enter number= ");
    scanf("%d",&a);
    printf("\n\a%s\n", (a%2==0) ? "even":"odd"); /* %s means a switch statement. \a means a beep*/
return 0;
}
