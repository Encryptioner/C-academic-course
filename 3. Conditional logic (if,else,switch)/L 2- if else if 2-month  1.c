#include <stdio.h>
int main()
{

    const int Jan=1;
    const int Feb=2;
    const int Mar=3;
    const int Apr=4;
    const int May=5;
    const int Jun=6;
    const int Jul=7;
    const int Aug=8;
    const int Sep=9;
    const int Oct=10;
    const int Nov=11;
    const int Dec=12;
    int month;
    printf("Enter the number of month= \n");
    scanf("%d", &month);
    if (month==Sep ||
        month==Apr ||
        month==Jun ||
        month==Nov )
    {
      printf("\nmonth %d is 30 days\n",4,9,6,11);/* I want to print month 9 is 30 days. But how?????*/
    }
    else if (month==Feb)
    {
      printf("\nmonth %d is 28 or 29 days\n",2);
    }
    else
    {
      printf("\nmonth %d is 31 days\n",1,3,5,7,8,10,12);
    }
return 0;
}
