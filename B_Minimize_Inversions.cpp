#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<pair<int , int>>a ;
        vector<int> b;

        for(int i= 1; i<=n ; i++)
        {
            int ele;
            cin>>ele;

            a.push_back(make_pair(ele , i));
        }

        sort(a.begin() , a.end());

        for(int i =0 ; i<a.size() ; i++)
        {
            cout<<a[i].first<<" ";
        }cout<<endl;

        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            b.push_back(ele);
        }

        for(int i=0 ;i<n ; i++)
        {
            cout<<b[a[i].second - 1]<<" ";
        }cout<<endl;
    }
}