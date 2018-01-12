#include <stdio.h>
#define Nmonths 5
void scanrain(double []);
void printrain(double []);
int main()
{
    double data[Nmonths];
    scanrain(data);
    printrain(data);
    return 0;
}
void scanrain(double arrayscan[])
{
    int month;
    printf("Enter monthly rain:\n");
    for(month=0;month<Nmonths;month++)
    {
        scanf("%lf",&arrayscan[month]);
    }
}
void printrain(double arrayprint[])
{
    int month;
    printf("Now rain:\n");
    for(month=0;month<Nmonths;month++)
    {
        printf("%10.2lf\n",arrayprint[month]);/*%2d indicates how many digit will go right*/
    }
}
