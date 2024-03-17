#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long> v;

        for(long long i=0 ; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        long long flag = 0;

        for(long long i=0; i<n-2 ; i++)
        {
            long long temp = v[i];
            v[i] = 0;

            v[i+1] -= 2*temp;
            v[i+2] -= temp; 

            if(v[i+1] < 0 || v[i+2] < 0)
            {
                flag = 1;
            }
        }

        for(long long i=0; i<v.size() ; i++)
        {
            if(v[i] != 0)
            {
                flag = 1;
            }
       //     cout<<v[i]<<" ";
        }

        if(flag != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}