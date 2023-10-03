#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) a.begin(), a.end()

void solve() {
    int n;
    cin >> n;
    vector <ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        a[i]++;
        ans = max(ans, accumulate(all(a), 1ll, [&](ll i, ll j) {
            return i * j;
        }));
        a[i]--;
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