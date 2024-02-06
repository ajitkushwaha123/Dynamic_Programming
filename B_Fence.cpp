#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;

    vector<long long> v;
    for(long long i= 0; i<n ; i++)
    {
        long long ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<long long> ps;
    long long s = 0;
    for(long long i= 0; i<k ; i++)
    {
        s += v[i];
    }

    ps.push_back(s);

    for(long long i = k; i<n  ;i++)
    {
        ps.push_back(v[i] + ps[i - k] - v[i-k]);
    }

  //  sort(ps.begin() , ps.end());

  long long min = ps[0];

  long long index=  0;

    for(long long i=0 ;i<ps.size() ; i++)
    {
        if(ps[i] < min)
        {
            min = ps[i];index = i;
        }
    }

    cout<<index + 1<<endl;
}