#include <stdio.h.>
int main()
{
    int m1[15]={96,45,78,52,85,78,29,39,75,86,45,78,52,45,78};
    int m2[15]={90,49,79,92,55,88,99,89,95,88,85,72,59,48,78};
    int m3[15]={40,85,78,96,74,78,52,41,85,96,36,95,45,82,74};
    int i,count,marks;
    double fm[15];
    for(i=0;i<15;i++)
    /*{
        printf("Enter 1st term marks of roll %d : ",i+1);
        scanf("%d",&m1[i]);
        printf("Enter 2nd term marks of roll %d : ",i+1);
        scanf("%d",&m2[i]);
        printf("Enter 3rd term marks of roll %d : ",i+1);
        scanf("%d",&m3[i]);
        printf("\n");
    }*/
    for(i=0;i<15;i++)
    {
        fm[i]=m1[i]/4+m2[i]/4+m3[i]/2;
    }
    for(i=0;i<15;i++)
    {
        printf("\nRoll no: %d\tTotal marks: %0.2lf\n",i+1,fm[i]);
    }
    for(marks=50;marks<=100;marks++)
    {
        count=0;
        for(i=0;i<15;i++)
        {
            if(fm[i]==marks)
            {
                count++;
            }
        }
    }
    printf("Marks: %d Count: %d\n", marks, count);

    return 0;
}
