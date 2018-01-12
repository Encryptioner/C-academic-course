#include <stdio.h>//okay
#include<bits/stdc++.h>
using namespace std;
bool leap(int y)
{
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0){return true;}
            else{return false;}
        }
        else{return true;}
    }
    else{return false;}
}

int main()
{
    int y;
    printf("Enter year= ");
    scanf("%d",&y);

        if(leap(y))
        {
            printf("leap year\n");
        }
        else
        {
            printf("not leap year\n");
        }

        main();
return 0;
}
