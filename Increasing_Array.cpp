#include <bits/stdc++.h>
using namespace std;

long long minInc(vector<long long> v , long long n)
{
    long long ans = 0;
    for(long long i= 1; i<n ; i++)
    {
        if(v[i] < v[i-1])
        {
            ans += (v[i-1] - v[i]);
            v[i] += (v[i-1] - v[i]);
        }
    }

    return ans;
}

int main()
{
    long long n;
    cin>>n;

    vector<long long> v;
    for(long long i =0 ;i<n ; i++)
    {
        long long ele;
        cin>>ele;

        v.push_back(ele);
    }

    cout<<minInc(v , n);
    return 0;
}