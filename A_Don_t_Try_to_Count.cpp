#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string a , b;
        cin>>a>>b;

        int fChar = a[0];
        int index = 0;

        for(int i=0 ; i<n ; i++)
        {
            if(fChar == a[i])
            {
                index = i;
            }
        }


    }
    return 0;
}