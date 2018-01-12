#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a = 153.1457952515;
    a=.1619;
    double b=a;

    b = floor(a*1000000)/1000000;
    printf("%.5f\n",b);
    cout<<b<<endl;
    double e=b+b;
    printf("%.5f\n",e);
    cout<<e<<endl<<endl;

    double d = 153.1457952515;
    cout.precision(3);
    b=d;
    cout << d << endl;
    printf("%.5f\n",b);
    cout<<b<<endl;

    e=b+b;
    printf("%.5f\n",e);
    cout<<e<<endl;
}
