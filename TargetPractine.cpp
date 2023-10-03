#include <bits/stdc++.h>
using namespace std;

void solve() {
    int ans = 0;
    for (int i = 0; i < 10; ++i) {
        string s; cin >> s;
        for (int j = 0; j < 10; ++j) if (s[j] == 'X') {
            ans += min({i, 9 - i, j, 9 - j}) + 1;
        }
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