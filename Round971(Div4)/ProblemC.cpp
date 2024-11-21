#include <bits/stdc++.h>

using namespace std;

void slove(){
    int x, y, d; cin >> x >> y >> d;
    if(x == y){
        cout << 0 << endl;
        return;
    }
    int moves_x = (x + d - 1) / d;
    int moves_y = (y + d - 1) / d;

    int total = moves_x + moves_y;

    if ((total % 2 == 0) && moves_x != moves_y) {
        total++;
    }

    cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        slove();
    }
    return 0;
}