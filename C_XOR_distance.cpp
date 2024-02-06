#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int n,k;
    cin>>n>>k;

    int p = 1 ; 
    int q = 2;

    vector<int> v;
    int odd= 0  , even = 0;

    if(n%2 == 0)
    {
        even = n/2;
        odd = n/2;
    }  
    else
    {
        even = (n-1)/2;
        odd = (n+1)/2;
    }

    vector<int> ans;
   // cout<<k<<endl;
    int o = 0 , e = 0;
    for(int i= 1; i<=k ; i++)
    {
        if(i%2 != 0)
        {
            ans.push_back(q);
            q+=2;
            e++;
        }
        else
        {
            ans.push_back(p);
            p += 2;
            o++;
        }
    }

   // cout<<e<<" "<<o<<endl;

    o = odd - o;
    e = even - e;

  //  cout<<o<<endl;
    for(int i = 1 ; i<=(n - k) ;i++)
    {
        if(i <= o)
        {
            ans.push_back(p);
            p += 2;
        }
        else
        {
            ans.push_back(q);
            q += 2;
        }
    }

    for(int i = k; i< n;i++)
    {
        cout<<ans[i]<<" ";
    }

    for(int i = 0 ; i<k ; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;



    }
    

    return 0;
}