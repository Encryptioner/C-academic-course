#include <stdio.h>
int main()
{
    int i,j;
    i=1;
    while (i<=4)
    {
        j=1;
        while(j<=i)
        {
            printf("*\t");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
