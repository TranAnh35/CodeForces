#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    int ans = 0;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(b[j] <= k - a[i]){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}