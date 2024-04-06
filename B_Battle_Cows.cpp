#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        int mine = v[k-1];

        int win = 0;
        int index = 0;

        for(int i=0; i<v.size() ; i++)
        {
            if(v[i] <= mine)
            {
                win++;
                index = i;
            }
            else
            {
                break;
            }
        }

        if(k <= index + 1)
        {
            win--;
        }

        cout<<win<<endl;
    }
    return 0;
}
