#include<stdio.h>

int main()
{
    int n=2;

    printf("%d %d %d %d\n",n++,n,++n);
    printf("%d\n",++n);
    // there is no specified answer for this where same variable are
    //implemented like this. Though, generally, printf print right to left order.
    //Here in c int gcc compiler first printf randomly choose n++ (which means do something
    //with n, then increment it), then ++n( which means increment it,then do something with n)
    //then it goes after n. in other compiler answer can be another
    return 0;
}
