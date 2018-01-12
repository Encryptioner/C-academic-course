#include<bits/stdc++.h>//92

using namespace std;

vector<unsigned long long int>fib(500,0);
//unsigned long long int fib[500]={0};

unsigned long long int fibonacci(unsigned long long int n)
{
    unsigned long long int a,b;
    if(fib[n-1]>0)
    {
        return fib[n-1];
    }
    else if(n-1<=0)
    {
        return 0;
    }
    else
    {
        a=fibonacci(n-1);
        b=fibonacci(n-2);
        //cout<<a<<" "<<b<<endl;
        fib[n-1-1]=a;
        fib[n-2-1]=b;
        return (a+b);
    }
}
int main()
{
    unsigned long long int n;
    fib[1]=1,fib[2]=2;
    cout<<"Enter which Fibonacci number u wanna see? press 0 to terminate. \n";

    while(cin>>n && n!=0)
    {
        printf("%lld th Fibonacci Number = %lld\n",n,fibonacci(n));
    }
    return 0;
}
