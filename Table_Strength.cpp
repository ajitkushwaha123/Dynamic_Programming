#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long> v;

        for(long long i=0 ;i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin() , v.end());

        reverse(v.begin() , v.end());

        long long ans= 0 ;

        for(long long i=0 ;i<v.size() ; i++)
        {
            ans = max(ans , (i+1) * v[i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}