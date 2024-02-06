#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    long long a = 1 , b = 1, c = 1;

    long long ans = 0;

    for(long long i= 1; i<=n ; i++)
    {
        for(long long j= 1 ; j<= n ; j++)
        {
            for(long long k= 1 ; k<= n ; k++)
            {
                ans += __gcd(__gcd(i , j) , k);
            }
        }
    }

    cout<<ans<<endl;
}