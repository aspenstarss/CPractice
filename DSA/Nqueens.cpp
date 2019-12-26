#include<bits/stdc++.h>
//typedef long long ll;
//#define ull       unsigned long long
//#define int       long long
#define F           first
#define S           second
#define pb          push_back
#define all(x)      x.begin(),x.end()
#define memset(a,b) memset(a,b,sizeof(a));
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;
const long long INF = 0x3f3f3f3f3f3f3f3fLL;

int backtrace(vector<vector<int>> &p, int k, int l);
bool check(vector<vector<int>> &p, int k, int l);

int totalNQueens(int n) {
    vector<vector<int>> p(n, vector<int>(n, 0));
    int res = 0;
    for(int i = 0; i < p[0].size(); i++){
        p[0][i] = 1;
        res += backtrace(p, 0, i);
        p[0][i] = 0;
    }
    return res;
}

int backtrace(vector<vector<int>> &p, int k, int l){
    int n = p[0].size();
    int res = 0;
    if(k == n - 1){
        if(check(p, k, l)) return 1;
        else return 0;
    }

    for(int i = 0; i < n; i++){
        p[k+1][i] = 1;
        if(check(p, k+1, i)){
            res += backtrace(p, k+1, i);
        }
        p[k+1][i] = 0;
    }
    return res;
}

bool check(vector<vector<int>> &p, int k, int l){
    for(int m = 1; m <= k; m++){
        if(k - m >= 0 && p[k-m][l] == 1){
            return false;
        }
    }
    for(int m = 1; m <= k; m++){
        if(l - m >= 0 && p[k-m][l-m] == 1) return false;
        if(l + m < p[0].size() && p[k-m][l+m] == 1) return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = totalNQueens(n);
    printf("%d", result);

    return 0;
}