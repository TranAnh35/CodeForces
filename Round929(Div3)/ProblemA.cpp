#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            ans += abs(a[i]);
        }else{
            ans += a[i];
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}