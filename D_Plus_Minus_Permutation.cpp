#include<bits/stdc++.h>
using namespace std;

long long calc(long long n)
{
    long long sum = (n*(n+1))/2;
    return sum;
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n , a , b;
        cin>>n>>a>>b;

        long long both = 0 , ca = n/a , cb = n/b , lcm = a*b/__gcd(a,b);

        both = n /lcm;

        ca -= both;
        cb -= both;

        long long sum = 0;

        sum += ca*n - calc(ca-1);

        long long cbs = calc(cb);
        sum -= cbs;

        cout<<sum<<endl;
    }
}