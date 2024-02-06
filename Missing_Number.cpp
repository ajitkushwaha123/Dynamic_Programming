#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i= 0; i<n-1; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sort(v.begin() , v.end());

    int count = 1;

    for(int i= 1 ; i<=n; i++)
    {
        if(i != v[i-1])
        {
            cout<<i<<endl;
            break;
        }
    }
}