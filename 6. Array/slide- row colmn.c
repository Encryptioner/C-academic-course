#include <stdio.h>
#define Nrow 3
#define Ncol 5

void input_entry(float table[Ncol][Ncol]);/* or [Nrow][Ncol] or [][Ncol]*/
void print_table(float table[][Ncol]);/* same*/

int main()
{
    float table[Nrow][Ncol]={{0}};/* or table[Nrow-1][Ncol-1]={{0}} , warning or table[Nrow][Ncol]={{0},{0}} */
    print_table(table);
    while(2)
    {
        input_entry(table);
        print_table(table);
    }
    return 0;
}
void input_entry(float table[][Ncol])
{
    int rows,col;
    printf("Enter row= ");
    scanf("%d",&rows);
    printf("Enter column= ");
    scanf("%d",&col);
    if((1<=rows&&rows<=Nrow)&&(1<=col&&col<=Ncol))
    {
        printf("Enter value: ");
        scanf("%f",&table[rows-1][col-1]);
    }
    else
    {
        printf("Invalid entry location. No change.\n");
        printf("Rows must be between 1 and %d\n",Nrow);
        printf("And column must be between 1 and %d\n",Ncol);
    }
}
void print_table(float table[Nrow][Ncol])
{
    int row,colm;
    for(row=1;row<=Nrow;row++)
    {
        for(colm=1;colm<=Ncol;colm++)
        {
            printf("%13.2f",table[row-1][colm-1]);
        }
        printf("\n");
    }
}
