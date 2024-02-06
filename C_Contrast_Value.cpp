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
        v.push_back(-28);
        for(long long i = 0 ;i<n  ; i++)
        {
            long long ele;
            cin>>ele;

            if(v.back() != ele)
            {
                v.push_back(ele);
            }
        }

        v.erase(v.begin() + 0);

//         for(long long i= 0; i<v.size() ; i++)

//         {
//             cout<<v[i]<<" ";
//         }
// cout<<endl;
        long long count = 2;

        for(long long  i= 1 ; i<v.size() - 1 ; i++)
        {
            if(v[i] > v[i-1] && v[i] > v[i+1])
            {
                count++;
            }
            else if(v[i] < v[i-1] && v[i] < v[i+1])
            {
                count++;
            }
        }

        if(v.size() == 1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
      //  cout<<count<<endl;
    }
}