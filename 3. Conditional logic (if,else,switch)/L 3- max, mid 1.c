#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter a&b&c= ");
    scanf("%g %g %g",&a,&b,&c);
    if(a>c){
        if(a>b)
        {
            printf("%g is max\n",a);
            if(b>c)
            {
                printf("%g is mid\n%g is min\n",b,c);
            }
            else
            {
                printf("%g is mid\n%g is min\n",c,b);
            }
        }
        else
        {
            printf("%g is max\n",b);
            printf("%g is mid\n%g is min\n",a,c);
        }
        }
    else{
        if(b>c)
        {
            printf("%g is max\n",b);
            printf("%g is mid\n%g is min\n",c,a);
        }
        else
        {
            printf("%g is max\n",c);
            if(a>b)
            {
                printf("%g is mid\n%g is min\n",a,b);
            }
            else
            {
                printf("%g is mid\n%g is min\n",b,a);
            }
        }
    }
return 0;
}
