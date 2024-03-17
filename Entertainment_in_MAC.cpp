#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {

        vector<string> v;

        long long n;
        cin >> n;

        string s;
        cin >> s;

        if (s[0] <= s[s.length() - 1])
        {
        ///    cout << s << endl;
            v.push_back(s);

            reverse(s.begin() , s.end());
            v.push_back(s);

            sort(v.begin() , v.end());

            cout<<v[0]<<endl;
        }
        else
        {
            string ans = ""; 
            string temp = s;
            reverse(ans.begin(), ans.end());
            ans += s; 
            ans += temp;
            cout << ans << endl;
        }
    }
    return 0;
}
