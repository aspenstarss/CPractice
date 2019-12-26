#include <bits/stdc++.h>
using namespace std;

int timeunava(int a, int b, int c, int r){
    if(a > b){
        return timeunava(-a, -b, -c, r);
    }
    int t;
    int nr = c + r;
    int nl = c - r;
    if(nr >= b){
        if(nl >= b) return b - a;
        if(nl >= a) return nl - a;
        return 0;
    }else if(nr <= a){
        return b - a;
    }else{
        if(nl >= a) return b - a - 2 * r;
        if(nl < a) return b - nr;
    }
}
    
int main(){
    int a, b, c, r;
    int n;
    scanf("%d", &n);
    int res[1001];
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &a, &b, &c, &r);
        res[i] = timeunava(a, b, c, r);
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", res[i]);
    }
    return 0;
}