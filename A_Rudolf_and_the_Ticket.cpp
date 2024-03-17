#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m , k;
        cin>>n>>m>>k;

        vector<int> a;
        vector<int> b;

        for(int i=0 ;i<n ; i++)
        {
            int ele;
            cin>>ele;

            a.push_back(ele);
        }

         for(int i=0 ;i<m ; i++)
        {
            int ele;
            cin>>ele;

            b.push_back(ele);
        }

        int count = 0;

        for(int i=0; i<n ;i++)
        {
            for(int j=0; j<m  ; j++)
            {
                if(a[i] + b[j] <= k)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
    return 0;
}