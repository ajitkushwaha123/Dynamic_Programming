#include <bits/stdc++.h>
using namespace std;

int inc(int ind, vector<int> &v) {
    if (ind == 0) return 1;

    int len = INT_MIN;
    if (v[ind] > v[ind - 1]) len = max(len, 1 + inc(ind - 1, v));

    return len;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;

        v.push_back(ele);
    }

    cout << inc(n - 1, v) << endl;
    return 0;
}
