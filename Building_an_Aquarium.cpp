#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, x; cin >> n >> x;
    vector<ll> a(n); for (auto &x:a)cin>> x;
    ll l = 0, r = 1ll << 60;
    while (r - l > 1) {
        ll m = l + r >> 1;
        ll tot = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] < m) {
                tot += m - a[i];
                if (tot >= x + 2) {
                    tot = x + 2;
                }
            }
        }
        if (tot <= x) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
    int t = 1; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
