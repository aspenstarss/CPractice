#include <bits/stdc++.h>
using namespace std;

int change(int amount, vector<int>& coins){
    int n = coins.size();
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    
    int res = 0;
    for(int i = 1; i <= n; i++){
        for(int j = coins[i])
        dp[amount] = dp[amount - coins[i]] + dp[amount - coins[i-1]]
    }
    return res;
}
    
int main(){
    vector<int> nums;
    int n, m, t;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }

    int result = change(m, nums);
    printf("%d", result);
    return 0;
}