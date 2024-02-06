#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    int odd = 0;

    for(int i= 0; i<n  ;i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
        if(ele % 2 != 0)
        {
            odd++;
        }
    }

    if(odd % 2 != 0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    
    return 0;
}