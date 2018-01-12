#include <stdio.h>
int main()
{
    int  a;
    printf("Enter number= ");
    scanf("%d", &a);
    if(a>=80){
      printf("A+");}
    else if(a>=70 && a<=79){
      printf("A");}
    else if(a>=60 && a<=69){
      printf("A-");}
    else if(a>=50 && a<=59){
      printf("B");}
    else if(a>=40 && a<=49){
      printf("C");}
    else{
      printf("Fail");}
return 0;
}



