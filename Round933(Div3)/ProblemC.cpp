#include <bits/stdc++.h>

using namespace std;

int min_characters_to_beautiful(int n, const string& s) {
    int count = 0;
    int i = 0;
    while (i < n - 2) {
        if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map") {
            count++;
            i += 3;
        } else {
            i++;
        }
    }
    return count;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    cout << min_characters_to_beautiful(n, s) << endl;
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