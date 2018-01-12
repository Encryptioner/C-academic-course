#include <stdio.h>
#include <math.h>
int main()
{
    int f;
    while(1)/*while(1==1),while(120),while(-96) etc. program works.. But,
        while(1!=1), while(1==0),while(120==98) process return 1*/
    {
        scanf("%d",&f);
        if(f<=0)
            break;
        printf("\nroot is %lf",sqrt(f));
    }
}
/*running window te f9 press korle enter command number show kore and jai enter kora hok na keno 1st scan kora number show kore..*/
