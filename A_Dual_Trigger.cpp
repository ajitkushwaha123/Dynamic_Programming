#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;

        int cnt = 0;

        for(int i=0; i<s.length() ; i++)
        {
            if(s[i] == '1')
            {
                cnt++;
            }
        }

        if(cnt % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
