#include "bits/stdc++.h"
#define MAXN 100
using namespace std;

double dp[MAXN][MAXN][MAXN][MAXN][MAXN];

double getVal(int a, int b, int c, int d, int e){
    vector<int> n;
    n.push_back(a);n.push_back(b);n.push_back(c);n.push_back(d);n.push_back(e);
    sort(n.begin(), n.end(), greater<int>());
    return dp[n[0]][n[1]][n[2]][n[3]][n[4]];
}
void setVal(double val, int a, int b, int c, int d, int e){
    vector<int> n;
    n.push_back(a);n.push_back(b);n.push_back(c);n.push_back(d);n.push_back(e);
    sort(n.begin(), n.end(), greater<int>());
    dp[n[0]][n[1]][n[2]][n[3]][n[4]] = val;
}

int main(){
    vector<int> nums;
    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // int dp[n1+1][n2+1][n3+1][n4+1][n5+1];
    memset(dp, 0, sizeof(dp));
    for(int a = 1; a <= n1; a++){
        double mina, minb, minc, mind, mine;
        for(int b = 1; b <= n2; b++){
            for(int c = 1; c <= n3; c++){
                for(int d = 1; d <= n4; d++){
                    for(int e = 1; e <= n5; e++){
                        mine = 5 * 8 * 0.75 + getVal(a-1, b-1, c-1, d-1, e-1);
                        mine = min(mine, (4 * 8 * 0.8 + getVal(a-1, b-1, c-1, d-1, e)));
                        mine = min(mine, (3 * 8 * 0.9 + getVal(a-1, b-1, c-1, d, e)));
                        mine = min(mine, (2 * 8 * 0.95 + getVal(a-1, b-1, c, d, e)));
                        mine = min(mine, (8 + getVal(a-1, b, c, d, e)));
                        printf("a=%d b=%d c=%d d=%d e=%d dp=", a, b, c, d, e);
                        cout << mine << endl;
                        setVal(mine, a, b, c, d, e);
                    }
                    // mind = 4 * 8 * 0.8 + getVal(a-1, b-1, c-1, d-1, 0);
                    // mind = min(mind, mine);
                }
                // minc = 3 * 8 * 0.9 + getVal(a-1, b-1, c-1, 0, 0);
                // minc = min(minc, mind);
            }
            // minb = 2 * 8 * 0.95 + getVal(a-1, b-1, 0, 0, 0);
            // minb = min(minb, minc);
        }
        // mina = 8 + getVal(a-1, 0, 0, 0, 0);
        // mina = min(mina, minb);
        // dp
    }
    cout << dp[n1][n2][n3][n4][n5];
    return 0;
}
