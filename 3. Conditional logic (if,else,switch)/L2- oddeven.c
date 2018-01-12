#include <stdio.h>
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    printf("\n%s\n", (n%2==0) ? "even":"odd");
}
