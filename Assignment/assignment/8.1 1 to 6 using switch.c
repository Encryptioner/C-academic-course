#include <stdio.h>
int main()
{
    int n;
    printf("Enter number between 1 to 6= ");
    scanf("%d",&n);
    printf("\n%s\n",
           (n==1) ? "ONE":
           (n==2) ? "TWO":
           (n==3) ? "THREE":
           (n==4) ? "FOUR":
           (n==5) ? "FIVE":
           (n==6) ? "SIX":
           "No comment"
           );
    return 0;
}
