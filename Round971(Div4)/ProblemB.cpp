#include <bits/stdc++.h>

using namespace std;

void slove(){
    int n, k = 0; cin >> n;
    int arr[n];
    while (n--){
        string s; cin >> s;
        for(int i = 0; i < 4; i++){
            if(s[i] == '#'){
                arr[k] = i + 1;
                k++;
            }
        }
    }
    for(int i = k - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        slove();
    }
    return 0;
}