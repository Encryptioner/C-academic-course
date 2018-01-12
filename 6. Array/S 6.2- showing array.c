#include <stdio.h>
int main()
{
    int ara[5]={10,2,3,6,8,9};
    printf("First element: %d\n", ara[0]);
    printf("Third element: %d\n", ara[2]);
    printf("Sixth element: %d\n", ara[5]);/*Gurbaze*/
    printf("\n");
    int ara2[30]={10,2,5};
    printf("0th element: %d\n",ara2[-1]);/*Gurbaze*/
    printf("First element: %d\n", ara2[0]);
    printf("Second element: %d\n", ara2[1]);
    printf("Third element: %d\n", ara2[2]);
    printf("4th element: %d\n", ara2[3]);
    printf("\n");
    printf("30th element: %d\n", ara2[29]);/*Everytime 0, man assign kora hoyni but computer e jaiga bookkora hoyese */
    printf("31th element: %d\n", ara2[30]);
    printf("32th element: %d\n", ara2[31]);
    printf("33th element: %d\n", ara2[32]);
    return 0;
}
