#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v;
    for(int i=1 ; i<=n && m ; i++)
    {
        if(n%i == 0 && m%i == 0)
        {
            v.push_back(i);
        }
    }
    // cout<<v.size()<<endl;

    cout<<v[v.size() - k]<<endl;
}