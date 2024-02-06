#include<bits/stdc++.h>
using namespace std;

int ans(int grt , int freq)
{
    int n = 1 - 2*grt + sqrt(((2*grt-1)*(2*grt-1)) + 8*freq);
    return n/2;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int size = (n*(n-1))/2;

        vector<int> v;
        vector<int> s;
        for(int i= 0 ;i< size;i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
            s.push_back(ele);
        }

        sort(s.begin() , s.end());
        int count = 1;

        vector<pair<int ,int>>p;

        for(int i= 0; i<s.size() - 1 ; i++)
        {
            if(s[i] == s[i+1])
            {
                count++;
            }
            else
            {
                p.push_back(make_pair(s[i] , count));
                count = 1;
            }
        }

      
        p.push_back(make_pair(s[s.size()-1] , count));
        reverse(p.begin() , p.end());

   //     cout<<ans(2 ,5)<<endl;
        int grt = 1;

        s.erase(unique(s.begin() , s.end()) , s.end());
       
        for(int i =0 ;i<p.size() ; i++)
        {
            int fre = 0;
            fre = ans(grt , p[i].second);
          //  cout<<fre<<endl;
            for(int j =0 ; j<fre - 1 ; j++)
            {
                s.push_back(p[i].first);
            }
            grt += fre;
        }

        sort(s.begin() , s.end());

        s.push_back(s[s.size() - 1]);

        for(int i= 0; i<s.size() ; i++)
        {
           cout<<s[i]<<" ";
        }cout<<endl;
    }
}