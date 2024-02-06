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

        vector<int> v;
        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin() , v.end());

        vector<pair<int ,int >>p;
        int count = 1;

        for(int i= 0; i< n ;i++)
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

        int sets = 0;
        int maxim = 0;
        p.push_back(make_pair(0 , 1));

        for(int i= 0; i<p.size() ; i++)
        {
            if(p[i].first != p[i-1].first + 1)
            {
               // sets++;
                maxim = max(p[i].second , maxim);
                sets += maxim;
            }
            else
            {

            }
        }

        cout<< sets<<endl;
        for(int i=0 ; i<p.size() ; i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
}