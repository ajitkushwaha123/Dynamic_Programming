#include <bits/stdc++.h>
using namespace std;
int main() {
    
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;

        vector<ll> v;
        for(ll i=0; i<n; i++)
        {
            ll ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin() , v.end());

        ll cnt = 0;
        ll ans = 0;
        for(ll i=0; i<v.size() ; i++)
        {
            ans += (v[i] + cnt) * min(m , k);
            cnt += m;
            k -= m;

        //    cout<<ans<<endl;

            if(k <= 0)
            {
                break;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
