#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n ;
    cin>>n;

    vector<long long> v;

    for(long long i= 0; i<n ; i++)
    {
        long long ele;
        cin>>ele;

        v.push_back(ele);
    }

    sort(v.begin() , v.end());
    vector<pair<long long , long long>> p;
    long long count = 1;

    for(long long i =0; i<v.size() ; i++)
    {
        if(v[i] == v[i+1])
        {
            count++;
        }
        else
        {
            p.push_back(make_pair(v[i] , count));
            count = 1;
        }
    }


  //  p.push_back(make_pair(v[v.size() - 1] , count));
  reverse(p.begin() , p.end());

  long long sum = 0;

    for(long long i= 0 ;i<p.size() ; i++)
    {
        sum += p[i].second;
        p[i].first = p[i].second;
        p[i].second = sum - p[i].second;
    }

    long long ans = 0;

    for(long long i= 0; i<p.size() ; i++)
    {
        ans += p[i].first*p[i].second;
    }

    cout<<ans<<endl;

}

