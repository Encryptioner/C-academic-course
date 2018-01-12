 #include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++){for(j=0;j<6;j++)/*here i/j++ n ++i/j makes same output j=5*/
        printf("%d\t",j+1);/*Look, Here j prints 0  1   2   3   4
    j++ prints 0    2    4
    ++j prints 1    3    5
    j+1 prints 1    2   3   4   5
    j=j+1 prints 0  1   2   3   4.......... Why???
    It's because inside for initialization;condition;update/increament/decreamen. Then its goes to printf properties and then returns tofor again*/
        printf("\n");}
return 0;
}
