#include<Stdio.h>
int main()
{
int a[20][20],i,j,n;
printf("Enter the number of lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
for(j=1;j<n-i;j++)
printf(" ");
for(j=0;j<=i;j++)
        {
if(j==0||i==j)
            {
a[i][j]=1;
            }
else
            {
a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
printf("%d ",a[i][j]);
        }
printf("\n");
    }
return 0;
}

