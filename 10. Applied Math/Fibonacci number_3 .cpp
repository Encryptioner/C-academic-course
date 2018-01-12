#include<bits/stdc++.h>//93 not okay

using namespace std;

vector<string>fib(500);

unsigned long long int string_to_int(string n_n)
{
    unsigned long long int n=0,l;
    l=n_n.length();
    for(int i=0;i<l;i++)
    {
        n+=n_n[i]-'0';
    }
    return n;
}
string string_summation(string a,string b)
{
    string sum;
    sum=a+b;
    return sum;
}
string string_subtraction(string a,string b)
{
    string sub;
    sub=a+b;
    return sub;
}
string fibonacci(string n)
{
    string a,b,n1,n2,sum;
    unsigned long long int n_n;

    n_n=string_to_int(n);

    if(n_n-1<=0)
    {
        return "0";
    }
    else if(fib[n_n-1]!="0")
    {
        return fib[n_n-1];
    }
    else
    {
        n1=string_subtraction(n,"1");
        n2=string_subtraction(n,"2");
        a=fibonacci(n1);
        b=fibonacci(n2);
        cout<<a<<" "<<b<<endl;
        fib[n_n-1-1]=a;
        fib[n_n-2-1]=b;
        sum=string_summation(a,b);
        return sum;
    }
}
int main()
{
    string n;
    fib[1]="1",fib[2]="2";

    cout<<"Enter which Fibonacci number u wanna see? press 0 to terminate. \n";
    while(cin>>n && n!="0")
    {
        cout<<n<<" th Fibonacci Number = "<<fibonacci(n)<<endl;
    }
    return 0;
}


