#include <bits/stdc++.h>
using namespace std;

int rob1(vector<int>& nums){
    int n = nums.size();
    int dp[n+2];
    memset(dp, 0, sizeof(dp));
    for(int i = 2; i <= n+1; i++){
        dp[i] = max(dp[i-1], dp[i-2] + nums[i-2]);
    }
    return dp[n+1];
}

int rob2(vector<int>& nums){
    int n = nums.size();
    if(n == 0) return 0;
    int dp1[n+1];
    int dp2[n+2];
    memset(dp1, 0, sizeof(dp1));
    memset(dp2, 0, sizeof(dp2));
    
    for(int i = 2; i <= n; i++){
        dp1[i] = max(dp1[i-1], dp1[i-2] + nums[i-2]);
    }
    for(int i = 3; i <= n+1; i++){
        dp2[i] = max(dp2[i-1], dp2[i-2] + nums[i-2]);
    }
    return max(dp1[n], dp2[n+1]);
}
    
int main(){
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }

    int result = rob2(nums);
    printf("%d", result);
    return 0;
}