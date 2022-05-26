#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("adam.in", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length(), ret = n;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'D') {
                ret = i;
                break;
            }
        }
        cout << ret << '\n';
    }
}

