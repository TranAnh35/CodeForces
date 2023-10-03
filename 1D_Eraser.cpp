#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    for (int i = 0; i < n; ++i) if (s[i] == 'B') {
        for (int j = i; j < n && j < i + k; ++j) {
            s[j] = 'W';
        }
        ans++;
    }
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}