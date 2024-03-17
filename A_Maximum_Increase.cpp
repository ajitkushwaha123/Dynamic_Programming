#include <bits/stdc++.h>
using namespace std;

long long inc(long long ind, vector<long long> &v) {
    if (ind == 0) return 1;

    long long len = 1;
    long long count = 1;

    if (v[ind] > v[ind - 1]) len = max(len, (count++) + inc(ind - 1, v));
    else count = 1;

    return len;
}

int main() {
    long long n;
    cin >> n;

    vector<long long> v;

    for (long long i = 0; i < n; i++) {
        long long ele;
        cin >> ele;

        v.push_back(ele);
    }

    cout << inc(n - 1, v) << endl;
    return 0;
}
