#include <stdio.h>
int main()
   {
       float b,h,A;
       printf("Give the base and height of circle=");//here to get desire output base>enter>height. U can get base n height in another way by typing printf and scanf twice.
       scanf("%g %g",&b ,&h);
       A=.5*b*h;
       printf("The area of circle=%g",A);
       return 0;/*return 0 means it return 0 as int is a return type function. where void is anon return type function*/
   }
