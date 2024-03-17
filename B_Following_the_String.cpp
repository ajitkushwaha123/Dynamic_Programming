#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<pair<int , int>> v;
        for(int i=0 ;i< n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(make_pair(ele , i));
        }

        sort(v.begin() , v.end());

        int count = 1;
        char ch = 'a';

        vector<pair<int ,int >> q;

        for(int i=0 ;i< v.size() - 1 ; i++)
        {
            if(v[i].first == v[i+1].first)
            {
                count++;
            }
            else
            {
                q.push_back(make_pair(v[i].first , count));
                count = 1;
            }
        }

        q.push_back(make_pair(v[v.size() - 1].first , count));

        vector<pair<int, char>> p;
        int inc = 0;

        for(int i=0; i<q.size() ; i++)
        {
            for(int j= 0; j<q[i].second ; j++)
            {
                p.push_back(make_pair(0 ,char(int(ch + inc))));
                inc++;
            }
            inc = 0;
        }

        for(int i=0 ; i<p.size() ; i++)
        {
            p[i].first = v[i].second;
            // cout<<v[i].second<<" ";
        }

        sort(p.begin() , p.end());

        for(int i=0 ;i<p.size() ; i++)
        {
            cout<<p[i].second;
        }cout<<endl;

    }
    return 0;
}