#include <stdio.h>
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    printf("\n%s\n",(n==0) ? "roman equivalent= 0":
           (n==1) ? "roman equivalent= i":
           (n==2) ? "roman equivalent= ii":
           (n==3) ? "roman equivalent= iii":
           (n==4) ? "roman equivalent= iv":
           (n==5) ? "roman equivalent= v":
           (n==6) ? "roman equivalent= vi":
           (n==7) ? "roman equivalent= vii":
           (n==8) ? "roman equivalent= viii":
           (n==9) ? "roman equivalent= ix":
           (n==10) ? "roman equivalent= x":
           "no comment");
return 0;
}
