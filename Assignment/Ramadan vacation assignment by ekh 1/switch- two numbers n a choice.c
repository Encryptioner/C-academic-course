#include <stdio.h>
int main()
{
    double n1,n2;
    char ch;

    printf("Enter: \n\n '1' for adding number1 and number2\n\n'2' for subtracting number2 from number1\n\n '3' for multiply number1 and number2\n\n'4' for dividing number1 by number2\n\n '5' for getting remainder of number1 by number2 : ");
    scanf("%s",&ch);
    printf("Enter number1: ");
    scanf("%lf",&n1);
    printf("Enter number2: ");
    scanf("lf",&n2);
    switch(ch)
    {
    case '1':
        printf("\n  %lf + %lf = %lf\n", n1, n2,(n1+n2));
        break;
    case '2':
        printf("\n  %lf - %lf = %lf\n", n1, n2,(n1-n2));
        break;
    case '3':
        printf("\n  %lf * %lf = %lf\n", n1, n2,(n1*n2));
        break;
    case '4':
        printf("\n  %lf / %lf = %lf\n", n1, n2,(n1/n2));
        break;
    /*case '5':
        printf("\n  %lf remainder %lf = %lf\n", n1, n2,(n1%n2));
        break;*/
    default:
        printf("\nInvalid input\n");
    }
    return 0;
}
