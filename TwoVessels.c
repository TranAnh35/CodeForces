#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d", &t);
    int a, b, c;
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        float min = a < b ? a : b;
        float avg = (a + b) * 1.0/ 2;
        printf("%d\n", (int)ceil((avg - min)/c));
    }
    return 0;
}