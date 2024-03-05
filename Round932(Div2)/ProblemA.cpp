#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    while(n--){
        string t = s;
        reverse(t.begin(), t.end());
        if(s <= t){
            cout << s << endl;
            break;
        }else{
            t.append(s);
            s = t;
            cout << s << endl;
            break;
        }
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