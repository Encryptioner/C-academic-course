#include <stdio.h>
int main()
{
    int r1,r2,c1,c2,n,i,j,k;
    int a[10][10],b[10][10],c[10][10];
    printf("How many rows in a= ");
    scanf("%d",&r1);
    printf("How many columns in a= ");
    scanf("%d",&c1);
    printf("How many rows in b= ");
    scanf("%d",&r2);
    printf("How many columns in b= ");
    scanf("%d",&c2);
    if(c1==r2)
    {
        printf("\nNow,Input a\n");
        for(i=0;i<r1;++i)
        {
            printf("row %d :\n",i+1);
            for(j=0;j<c1;++j)
                //printf("\nEnter a[%d][%d]: ",i+1,j+1);
                scanf("%d",&a[i][j]);
        }
        printf("\nNow, Input b\n");
        for(i=0;i<r2;++i)
        {
            printf("row %d :\n",i+1);
            for(j=0;j<c2;++j)
                //printf("\nEnter b[%d][%d]: ",i+1,j+1);
                scanf("%d",&b[i][j]);
        }
        printf("\nNow, Matrix a=\n");
        for(i=0;i<r1;++i)
        {
            for(j=0;j<c1;++j)
                printf("\t%4d\t",a[i][j]);
                printf("\n\n");
        }
        printf("\nNow, Matrix b=\n");
        for(i=0;i<r2;++i)
        {
            for(j=0;j<c2;++j)
                printf("\t%4d\t",b[i][j]);
                printf("\n\n");
        }

        for(i=0;i<r1;++i)
        {
            for(j=0;j<c2;++j)
                c[i][j]=0;
                for(i=0;i<r1;++i)
                    for(j=0;j<c2;++j)
                    for(k=0;k<c1;++k)

                    c[i][j]=a[i][k]*b[k][j]+c[i][j];

        }
        printf("Now, multiplication= \n\n");
        for(i=0;i<r1;++i)
        {
            for(j=0;j<c2;++j)
                //for(k=0;k<c1;k++)
                printf("\t%4d\t",c[i][j]);
                //if(j==c2-1)
                //printf("\n\n");
        }

    }
    else
    {
        printf("\nSyntax Error\n");
    }
    return 0;
}
