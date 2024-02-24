#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int64_t> a(n);
        for (auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        const int64_t inf = (int64_t(1) << 31) - 1;
        int l = 0, r = n - 1, ans = n;
        while(l < r){
            if (a[l] + a[r] == inf){
                ans--;
                l++;
                r--;
            }else{
                if (a[l] + a[r] < inf){
                    l++;
                }else{
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}