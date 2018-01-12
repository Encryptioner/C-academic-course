 #include <stdio.h>
 int main()
 {
     double n;
     printf("Enter your number: ");
     scanf("%lf", &n);
     if(n > 0)
     {
         printf("The number is positive\n");
     }
     else if(n < 0)
     {
         printf("The number is negative\n");
     }
     else/*or else if (n==0)*/
     {
        printf("The number is zero\n");
     }

     return 0;
 }
