#include <stdio.h>
#define Nyear 2
#define Nmonth 5

float loadrain(int year,int month)
{
    float table[Nyear][Nmonth]={
                                {12.25,45.45,10,30,52},
                                {30,40,25,10,03}
                               };
    if((year>=0&&year<=Nyear)&&(month>=0&&month<=Nmonth))/*or if((year>=0&&year<=Nyear)&&(month>=0&&month<=Nmonth)) */
    {
        return table[year-1][month-1];/* or return table[year][month]; */
    }
    else
        return -2;/* or -1 or -8 */
}
int main()
{
    int year,month;
    float rainfall;
    printf("Enter year= ");
    scanf("%d",&year);
    printf("Enter month= ");
    scanf("%d",&month);
    rainfall=loadrain(year,month);
    if(rainfall<0)
    {
        printf("Year must be between 1 and %d\n",Nyear);
        printf("And month be between 1 and %d\n",Nmonth);
    }
    else
    {
        printf("Rainfall for year %d, month %d is %0.2f mm",year,month,rainfall);
    }
    return 0;
}
