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

        string s;
        cin>>s;

        long long count = 0;

        for(long long i=0; i<n - 2; i++)
        {
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p')
            {
                count++;
            }

            if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')
            {
                count++;
            }
        }

        int flag = 0;

        for(int i=0; i<n-4 ; i++)
        {
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i' && s[i+4] == 'e')
            {
                flag++;
            }
        }

   //     cout<<flag<<endl;
        cout<<count-flag<<endl;
    }
    return 0;
}