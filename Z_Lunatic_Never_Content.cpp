#include<bits/stdc++.h>
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

        for(long long i=0; i<n; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        vector<long long> ans;
        long long mid = n/2;

        long long right = n-1;
        for(long long i=0; i<mid; i++)
        {
            ans.push_back(abs(v[i] - v[right]));
            right--;
        }

        // for(long long i=0; i<ans.size(); i++)
        // {
        //     cout<<ans[i]<<" ";
        // }cout<<endl;

        long long gcd = 0;

        if(ans.size() > 0) gcd = ans[0];

        if(ans.size() > 1)
        {
            for(long long i=1; i<ans.size(); i++)
            {
               gcd = __gcd(gcd , ans[i]);
            }
        }

        cout<<gcd<<endl;
    }
}