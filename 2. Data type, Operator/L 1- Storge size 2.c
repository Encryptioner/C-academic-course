#include <stdio.h>
//#include <conio.h>
//#include <limits.h>
#include <float.h>//limits.h is not appropriate here.as %E only include in float.h//
int main()
{
    printf("Storage size of void: %d ",sizeof(void));//any data types can b used inside sizeof
    printf("\nMaximum positive value of float: %E \n",FLT_MAX);//these 3 may b 4 float
    printf("Minimum positive value of float: %E \n",FLT_MIN);
    printf("precision value: %d \n",FLT_DIG);
    printf("size of int= %d",sizeof(int));
    return 0;
}


//if you use limits.h the program does n't exist
