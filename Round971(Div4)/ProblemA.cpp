#include <bits/stdc++.h>

using namespace std;

void slove(){
    int a, b; cin >> a >> b;
    int ans = INT_MAX;
    for(int i = a; i <= b; i++){
        ans = min(ans, (i - a) + (b - i));
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        slove();
    }
    return 0;
}