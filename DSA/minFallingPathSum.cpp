#include <bits/stdc++.h>
using namespace std;

int minFallingPathSum(vector<vector<int>>& arr) {
    int n = arr.size(), m = arr[0].size();
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    // int premin[m+1] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int premin = 300000;
            for(int k = 1; k <= m; k++){
                if(dp[i-1][k] < premin && k != j){
                    premin = dp[i-1][k];
                }
            }
            dp[i][j] = premin + arr[i-1][j-1];
        }
    }
    int min = 30000;
    for(int i = 1; i <= m; i++){
        if(dp[n][i] < min)
            min = dp[n][i];
    }
    return min;
}
    
int main(){
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};
    // int n, t;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }

    int result = minFallingPathSum(nums);
    printf("%d", result);
    return 0;
}