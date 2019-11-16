#include <bits/stdc++.h>
using namespace std;
/*待优化*/
int maxUsers(int d, int m, int k, vector<vector<int> > task){
    // int dp[k+1][d+1][m+1];
    int dp[d+1][m+1];
    memset(dp,0,sizeof(dp));
    // for(int i = 1; i <= k; i++){
    //     for(int j = 1; j <= d; j++){
    //         for(int l = 1; l <= m; l++){
    //             if((j - task[i-1][0] < 0) || (l - task[i-1][1] < 0)){
    //                 dp[i][j][l] = dp[i-1][j][l];
    //             }else{
    //                 dp[i][j][l] = max(dp[i-1][j][l], dp[i-1][j - task[i-1][0]][l - task[i-1][1]] + task[i-1][2]);
    //             }
    //         }
    //     }
    // }
    for(int i = 1; i <= k; i++){
        for(int j = d; j >= task[i-1][0]; j--){
            for(int l = m; l >= task[i-1][1]; l--){
                dp[j][l] = max(dp[j][l], dp[j - task[i-1][0]][l - task[i-1][1]] + task[i-1][2]);
            }
        }
    }
    return dp[d][m];
}
    
int main(){
    int d, m, k;
    scanf("%d %d %d", &d, &m, &k);
    if(k == 0) return 0;
    vector<vector<int> > task(k, vector<int>(3));
    for(int i = 0; i < k; i++){
        int disk, memory, users;
        scanf(" %d %d %d", &disk, &memory, &users);
        task[i][0] = disk;
        task[i][1] = memory;
        task[i][2] = users;
    }
    int result = maxUsers(d, m, k, task);
    printf("%d\n", result);
    return 0;
}
// 15 10 4
// 5 1 1000
// 2 3 3000
// 5 2 15000
// 10 4 16000