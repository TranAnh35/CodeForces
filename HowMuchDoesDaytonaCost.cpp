#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k, flag = 1; cin >> n >> k;
        int arr[n];
        for (auto &x:arr) cin >> x;
        for(auto x: arr){
            if (x == k){
                cout << "Yes" << endl;
                flag = 0;
                break;
            }
        }
        if(flag == 1) cout << "No" << endl;
    }
    return 0;
}