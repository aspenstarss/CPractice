#include <bits/stdc++.h>
using namespace std;
/*待优化*/
int longestCommonSubsequence(vector<char>& text1, vector<char>& text2){
    int n = text1.size();
    int m = text2.size();
    if(text1.empty() || text2.empty()){
        return 0;
    }

    // int dp[n+1][m+1];
    vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
    
int main(){
    int n;
    scanf("%d", &n);
    if(n == 0) return 0;
    for(int i = 0; i < n; i++){
        vector<char> text1, text2;
        char c;
        int l1, l2;
        scanf("%d %d", &l1, &l2);
        for(int j = 0; j < l1; j++){
            scanf(" %c", &c);
            text1.push_back(c);
        }
        scanf("%c", &c);
        for(int j = 0; j < l2; j++){
            scanf("%c", &c);
            text2.push_back(c);
        }
        int result = longestCommonSubsequence(text1, text2);
        printf("%d\n", result);
    }
    return 0;
}