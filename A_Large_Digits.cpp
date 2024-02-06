#include<bits/stdc++.h>
using namespace std;

long long sum (long long n)
{
    long long sum = 0;

    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    long long n,m;
    cin>>n>>m;

    cout<<max(sum(n) , sum(m))<<endl;
}