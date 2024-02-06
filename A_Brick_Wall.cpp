#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        if(m%2 != 0)
        {
            m -= 1;
        }

        cout<<n*(m/2)<<endl;
    }
    return 0;
}