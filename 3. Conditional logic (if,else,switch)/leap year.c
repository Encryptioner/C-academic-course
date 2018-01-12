#include <stdio.h>
int main()
{
    int year;
    printf("Enter year= ");
    scanf("%d",&year);
    printf("\n\%s\n", (year%4==0) ? ("%d is leap year",year)
           :("%d is not a leap year",year));/*what's now? I wnt to print 2000 is a leap year.. how it is possible?*/
return 0;
}
