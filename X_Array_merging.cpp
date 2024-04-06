#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }

        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            b.push_back(ele);
        }

        vector<pair<int, int>> p;
        vector<pair<int, int>> q;

        int cnt = 1;

        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] == a[i + 1]) {
                cnt++;
            } else {
                p.push_back(make_pair(a[i], cnt));
                cnt = 1;
            }
        }

        p.push_back(make_pair(a[a.size() - 1], cnt));

        // Storing for b
        cnt = 1;

        for (int i = 0; i < b.size() - 1; i++) {
            if (b[i] == b[i + 1]) {
                cnt++;
            } else {
                q.push_back(make_pair(b[i], cnt));
                cnt = 1;
            }
        }

        vector<pair<int, int>> copy;
        
        vector<pair<int, int>> copy2;


        q.push_back(make_pair(b[b.size() - 1], cnt));

        sort(p.begin(), p.end());
        sort(q.begin(), q.end());


        // p.erase(unique(p.begin(), p.end()), p.end());

        for (int i = 0; i < p.size() - 1; i++) {
            if (p[i].first != p[i + 1].first) {
                copy.push_back(make_pair(p[i].first, p[i].second));
            }
        }

        copy.push_back(make_pair(p[p.size() - 1].first, p[p.size() - 1].second));

        // for (int i = 0; i < copy.size(); i++) {
        //     cout << copy[i].first << " " << copy[i].second << endl;
        // }

        //second aarry

          for (int i = 0; i < q.size() - 1; i++) {
            if (q[i].first != q[i + 1].first) {
                copy2.push_back(make_pair(q[i].first, q[i].second));
            }
        }

        copy2.push_back(make_pair(q[q.size() - 1].first, q[q.size() - 1].second));

        vector<pair<int ,int>> ans;

        for(int i=0; i<copy.size() ; i++)
        {
            ans.push_back(make_pair(copy[i].first , copy[i].second));
        }

        for(int i=0; i<copy2.size() ; i++)
        {
            ans.push_back(make_pair(copy2[i].first , copy2[i].second));
        }

        sort(ans.begin() , ans.end());

        int result = 0;

        for (int i = 0; i < ans.size() - 1; i++) {
            if(ans[i].first == ans[i+1].first)
            {
                result = max(result , ans[i].second + ans[i+1].second);
            }
        }

        for(int i=0; i<ans.size() ; i++)
        {
            result = max(result , ans[i].second);
        }

        cout<<result<<endl;
    }
    return 0;
}
