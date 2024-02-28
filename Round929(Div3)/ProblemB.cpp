#include <bits/stdc++.h>

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
        ans += a[i];
    }
    if(ans % 3 == 0) cout << 0 << endl;
    else if(ans % 3 == 2) cout << 1 << endl;
    else{
        for(auto x: a){
            if((ans - x) % 3 == 0){
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    }
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