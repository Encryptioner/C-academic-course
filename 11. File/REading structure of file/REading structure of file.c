#include <stdio.h>
struct std
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct std a[10],temp;
    int i,n;
    FILE *fin,*fo;
    fin=fopen("input.txt","r");
    fo=fopen("output.txt","w");

    fscanf(fin,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fin,"%[^\n]",a[i].name);
        fscanf(fin,"%d",&a[i].roll);
        fscanf(fin,"%f",&a[i].marks);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i].marks>a[i+1].marks)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        fprintf(fo,"\n%s\t%d\t%0.2f",a[i].name,a[i].roll,a[i].marks);
    }
    return 0;
}
