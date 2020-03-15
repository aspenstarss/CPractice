#include<bits/stdc++.h>

using namespace std;

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        if(n == 0 || amount == 0) return 0;
        int dp[amount+1];
        memset(dp, 0, sizeof(dp));
        // sort(coins.begin(), coins.end());
        for(int i = 1; i <= amount; i++){
            dp[i] = amount + 1;
        }
        
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < amount + 1; j++){
                if(j >= coins[i-1]){
                        dp[j] = min(dp[j], dp[j-coins[i-1]] + 1);
                }else{
                    dp[j] = dp[j];
                }
            }
        }
        if(dp[amount] > amount) return -1;
        return dp[amount];
    }
    
int main(){
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }
    int a;
    cin >> a;
    int result = coinChange(nums, a);
    printf("%d", result);

    return 0;
}