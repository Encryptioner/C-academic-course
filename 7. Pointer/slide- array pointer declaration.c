#include<stdio.h>
int main()
{
    int i,j;
    //int x[2][5]; // same as int [*x][5]
    int x[2][5]={
        {12,45,10,30,52},
            {40,40,25,10,53}};

    /*int *x[][]={
        {12,45,10,30,52},
            {40,40,25,10,53}};*/


    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d_%d : %d in %d\n\n",(i),(j),x[i][j],*((x+i)+j));//*(*(x+i)+j describes value of x[i][j])

        }
    }
    return 0;
}
