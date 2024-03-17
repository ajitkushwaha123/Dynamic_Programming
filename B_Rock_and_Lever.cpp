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

            int bits = log2(ele) + 1;

            v.push_back(bits);
        }

        for(int i= 0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;

        
    }
}