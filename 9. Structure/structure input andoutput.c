#include <stdio.h>
#include <string.h>//2nd tate emo show korse.. :D
int main()
{
    int i;
    struct student
    {
        char name[100];
        int age;
        float cgpa;
    }ob [2];
    for(i=1;i<=2;i++)
    {
        printf("Enter name %d: ",i);
        scanf("%s",ob[i].name);
        printf("Enter age %d: ",i);
        scanf("%d",&ob[i].age);
        printf("Enter cgpa %d: ",i);
        scanf("%f",&ob[i].cgpa);
    }
    for(i=1;i<=2;i++)
    {
        printf("\ncgpa of %s (%d) is %g\n",ob[i].name,ob[i].age,ob[i].cgpa);
    }

    return 0;
}
