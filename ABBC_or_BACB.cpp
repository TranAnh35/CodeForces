#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(a) a.begin(), a.end()

void solve() {
    string s;
    cin >> s;
    int mn = 1 << 30, ans = count(all(s), 'A');
    if (s[0] == 'B' || s.back() == 'B') {
        cout << ans << '\n';
        return;
    }
    vector <int> pos;
    for (int i = 0; i < s.length(); ++i) if (s[i] == 'B') {
        pos.pb(i);
    }
    if (pos.empty()) {
        cout << "0\n";
        return;
    }
    for (int i = 1; i < pos.size(); ++i) {
        mn = min(mn, pos[i] - pos[i - 1] - 1);
    }
    mn = min(mn, pos[0]);
    mn = min(mn, int(s.length()) - pos.back() - 1);
    cout << ans - mn << '\n';
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}