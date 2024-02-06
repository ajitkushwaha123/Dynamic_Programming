#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n ;
        char a;
        cin>>n>>a;

        string s;
        cin>>s;

        sort(s.begin() , s.end());
        s.erase(unique(s.begin() , s.end()) , s.end());

        int ans = 0;

        if(s.length() == 1 && s[0] == a)
        {
            cout<<"0"<<endl;
            ans = 0;
        }   
        else
        {
            cout<<"2"<<endl;
        }
    }
}