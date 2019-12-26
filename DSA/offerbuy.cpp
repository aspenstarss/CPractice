#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums);

int offerbuy(vector<int> &a, int c, int k){
    int n = a.size();
    int dp[n+1][c+1][2];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= c; j++){
            dp[i][j][0] = max(dp[i-1][j][1], dp[i-1][j][0]);
            if((j - a[i-1]) >= 0){
                dp[i][j][1] = max(max(dp[i-1][j-a[i-1]][0] + 1, dp[i-1][j-a[i-1]][1] + 1), dp[i-1][j][1] + 2);
            }
        }
    }
    int b = 0;
    return max(dp[n][c][0], dp[n][c][1]);
}
int main(){
    vector<int> a;
    int t, n, c, k, g;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d %d", &n, &c, &k);
        for(int j = 0; j < n; j++){
            scanf("%d", &g);
            a.push_back(g);
        }
        cout << offerbuy(a, c, k) << endl;
    }
    return 0;
}