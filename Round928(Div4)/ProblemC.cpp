#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &a){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << a[n] << endl;
    }
}

int main(){
    vector<int> a(2e5 + 1);
    for (int i = 1; i <= 2e5; i++) {
        a[i] = a[i - 1];
        int x = i;
        while (x > 0) {
            a[i] += x % 10;
            x /= 10;
        }
    }
    solve(a);
    return 0;
}