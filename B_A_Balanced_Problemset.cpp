#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,n;
        cin>>x>>n;

        for(int i= n ; i <= x ; i++)
        {
            if(x%i != 0)
            {
            //    x -= (n-1)*1;
            }
            else
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}