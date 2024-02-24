#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] == 0)
                continue;
            else if((a[i] == a[i + 1]) && a[i] != 0){
                cout << "SQUARE" << endl;
                break;
            }
            else{
                cout << "TRIANGLE" << endl;
                break;
            } 
        }
    }
}

int main(){
    solve();
    return 0;
}