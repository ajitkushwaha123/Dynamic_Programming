#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b ,x;
        cin>>a>>b>>x;

        int bits = log2(x) + 1;
        int bit = log2(max(a,b)) + 1;
        cout<<bits<<endl;

        int mask = 1;
        mask = mask << min(bit-1 , bits-1);

        cout<<mask<<endl;

        vector<int> v;

        while(mask > 0)
        {
           a = a^mask;
           b = b^mask;

           v.push_back(a^b);
        }

    }
    return 0;
}