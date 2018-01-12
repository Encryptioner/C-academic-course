#include <stdio.h>

int main()
{
    int x;
    int y;
    if( x > 4 )  // <-- what is the value of x here?
    {
        y = 5;   // <-- did this line of code execute?
    }
    printf("x= %d, y= %d ",x,y);
    return 0;
}


