#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int d[n], s[n];
        for(int i = 0; i < n; i++){
            scanf("%d %d", &d[i], &s[i]);
        }
        int ans = INFINITY;
        for (int j = 0; j < n; j++){
            ans = ans < (d[j] + (s[j] - 1) / 2) ? ans : (d[j] + (s[j] - 1) / 2);
        }
        printf("%d\n", ans);
    }
    return 0;
}