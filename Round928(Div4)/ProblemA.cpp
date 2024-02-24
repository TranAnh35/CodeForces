#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        int count_A = 0, count_B = 0;
        for(char c : s){
            if(c == 'A')
                count_A++;
            else
                count_B++;
        }
        if (count_A > count_B)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
}

int main(){
    solve();
    return 0;
}
