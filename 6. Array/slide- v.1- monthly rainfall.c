#include <stdio.h>
#define nmonths 05
int main()
{
    int table[]={10,12,};
    printf("%d\n",table[4]);
    printf("%d\n",table[3]);
    printf("%d\n",table[2]);
    printf("%d\n",table[1]);
    printf("%d\n",table[0]);
    printf("%d\n",table[-1]);
    int month;
    double table1[12]={30,40,50,47,45,20,4,58,48,45,01,14};/* here table1[] can be said..*/
    printf("Enter month number= ");
    scanf("%d",&month);
    printf("Average rainfall in month %d= %0.2lf mm\n",month,table1[month-1]);


    double data[nmonths];
    printf("Now enter value of average rainfall in another array:\n");
    for(month=0;month<nmonths;month++)
    {
        scanf("%lf",&data[month]);
    }
    printf("From January to May:\n");
    for(month=0;month<nmonths;month++)
    {
        printf("    %.2lf\n",data[month]);
    }
    printf("From May to January:\n");
    for(month=nmonths-1;month>=0;month--)
    {
        printf("  %0.12lf\n",data[month]);
    }

    return 0;
}
