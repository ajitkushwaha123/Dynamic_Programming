#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<char> v;

        char ch = 'a';

        for(int i= 1; i<=k ; i++)
        {
            v.push_back(ch);
            ch = int(ch + 1);
        }

        for(int j = 0; j<n ; j++)
        {
            for(int i= 0; i<v.size() ; i++)
            {
              cout<<v[i];
            }
        }cout<<endl;
    }
}