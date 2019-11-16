#include <bits/stdc++.h>
using namespace std;

int helper(int k, int a, int b);

// int bst(int n){
//     int res = 0;
//     for(int i = 1; i <= n; i++){
//         res += helper(i, 1, n);
//     }
//     return res;
// }
    
// int helper(int k, int a, int b){
//     if(a == b) return 1;
//     // if(a >= k || k >= b) return 0;
//     int left, right;
//     left = 0;
//     right = 0;

//     for(int i = a; i < k; i++){
//         left += helper(i, a, k-1);
//     }
//     for(int j = k+1; j <= b; j++){
//         right += helper(j, k+1, b);
//     }
//     if(left == 0 || right == 0){
//         return left + right;
//     }
//     return left * right;
// }

int bst(int n){
    vector<int> dp;
    dp.push_back(1);
    dp.push_back(1);
    dp.push_back(2);
    if(n < 3) return dp[n];
    int i = 3;
    while(i <= n){
        int num = 0;
        for(int j = 1; j <= i; j++){
            num += dp[j - 1] * dp[i - j];
        }
        dp.push_back(num);
        i++;
    }
    return dp[n];
}


int main(){
    int n;
    scanf("%d", &n);
    int result = bst(n);
    printf("%d", result);
    return 0;
}