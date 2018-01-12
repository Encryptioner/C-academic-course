#include <stdio.h>/*This program doesn't work. Every input show same result. I also want 2 do it with switch statement and loop.*/
int main()
{
    char J,F,M,A,m,j,g,a,S,O,N,D;
    const char Jan=J;
    const char Feb=F;
    const char Mar=M;
    const char Apr=A;
    const char May=m;
    const char Jun=j;
    const char Jul=g;
    const char Aug=a;
    const char Sep=S;
    const char Oct=O;
    const char Nov=N;
    const char Dec=D;
    int month;

    printf("Enter the number of month= \n");
    scanf("%c", &month);
    if (month==S ||
        month==A ||
        month==j ||
        month==N )
    {
      printf("\n30 days\n");
    }
    else if (month==F)
    {
      printf("\n28 or 29 days\n");
    }
    else
    {
      printf("\n31 days\n");
    }
return 0;
}
