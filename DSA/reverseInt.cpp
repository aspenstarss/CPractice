#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    // if(964632435 > 0x7fffffff / 10) cout << "yes";
    // else cout << "no";
    int out = 0;
    while(x / 10 != 0){
        out += x % 10;
        x /= 10; 
        if(out > (0x7fffffff / 10) || (out == (0x7fffffff / 10) && x > 7)) return 0;
        if(out < ((0x7fffffff + 1) / 10) || (out == ((0x7fffffff + 1) / 10) && x < -8)) return 0;
        out *= 10;
    }
    out += x;
    return out;
}
    
int main(){
    int n, t;
    scanf("%d", &n);
    int result = reverse(n);
    printf("%d", result);
    return 0;
}