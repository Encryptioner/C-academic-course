#include <stdio.h>
int funct1 (int count);/*this line can be removed without making error n we can replace 'count' with 'x' or anything or empty space here*/

void main()
{
    int a,count;
    for(count=1; count<=5; ++count)
    {
        //a=funct1(count);
        a=funct1(1);
        printf("%d\n",a);
    }
}

int funct1(int x)/*we can replace all x with count*/
{
    static int y=0;/*what is static? static is a variable type what make existence of value of a variable..The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope.*/
    y+=x;/*y=y+x, y=0 + count=1 = 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15 */
    return (y);/*return y or return (y+=x)(then previous condition won't need to be typed) or empty space*/
}

