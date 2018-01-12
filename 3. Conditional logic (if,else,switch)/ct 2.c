/*gadha*/
#include <stdio.h>
int main()
{
    int num;
    printf("number= ");
    scanf("%c",&num);
    switch(num)/*
    {
    case 1:
        (num==1);
        printf("One");
        break;
    case 2:
        (num==2);
        printf("Two");
        break;
    case 3:
        (num==3);
        printf("Three");
        break;
    case 4:
        printf("other");
        break;
    }*/
    {
    case '1':
        printf("One");
        break;
    case '2':
        printf("Two");
        break;
    case '3':
        printf("Three");
        break;
    default:
        printf("Other");
    }

}
