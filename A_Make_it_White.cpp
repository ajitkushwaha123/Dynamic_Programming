#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  n;
        cin>>n;

        string s;
        cin>>s;

        int firstBlack = -1;
        int lastBlack = -1;

        for(int i= 0; i<n ; i++)
        {
            if(s[i] == 'B')
            {
                firstBlack = i;
                break;
            }
        }

        for(int i= 0; i<n ; i++)
        {
            if(s[i] == 'B')
            {
                lastBlack = i;
            }
        }
 // -1 - -1 + 1 = 1
 if(lastBlack == -1 && firstBlack == -1)
 {
    cout<<"0"<<endl;
 }
 else
 {
         cout<<lastBlack - firstBlack + 1<<endl;
 }

    }
}