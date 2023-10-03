#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> a(n), h(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    int ans = 0;
    for (int i = 0, j = 0, tot = 0; i < n; ++i) {
        while (j < n && (j <= i || h[j - 1] % h[j] == 0) && tot + a[j] <= k) {
            tot += a[j], j++;
        }
        ans = max(ans, j - i);
        tot -= a[i];
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