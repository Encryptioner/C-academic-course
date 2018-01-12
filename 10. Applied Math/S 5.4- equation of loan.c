#include <stdio.h>
int main()
{
    double loan_amount,interst_rate,time,total_amount,monthly_amount;

    printf("Enter amount of loan: ");
    scanf("%lf",&loan_amount);
    printf("Enter rate of interest per year: ");
    scanf("%lf",&interst_rate);
    printf("Number of years: ");
    scanf("%lf",&time);
    total_amount=loan_amount+loan_amount*interst_rate/100*time;
    monthly_amount=total_amount/(time*12);
    printf("\nTotal amount: %0.2lf\n", total_amount);
    printf("\nMonthly amount: %0.2lf\n", monthly_amount);
    return 0;
}
