#include<bits/stdc++.h>
#define F           first
#define S           second
#define endl        "\n"
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(),x.end()
#define memset(a,b) memset(a,b,sizeof(a));
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;

bool isMatch(string s, string p) {
        int ns = s.length();
        int np = p.length();
        if(p.empty()) return s.empty();
        vector<vector<bool>> dp(ns+1, vector<bool>(np+1, false));
        dp[0][0] = true;
        for(int i = 1; i <= np; i++){
            if(i-2 >= 0 && p[i-1] == '*' && p[i-2]){
                dp[0][i] = dp[0][i-2];
            }
        }
        
        for(int i = 1; i <= ns; i++){
            for(int j = 1; j <= np; j++){
                if(p[j-1] == s[i-1] || p[j-1] == '.')
                    dp[i][j] = dp[i-1][j-1];
                if(p[j-1] == '*'){
                    bool zero, one;
                    if(j-2 >= 0){
                        zero = dp[i][j-2];
                        one = (p[j-2] == s[i-1] || p[j-2] == '.') && dp[i-1][j];
                        dp[i][j] = zero || one;
                    }
                }
            }
        }
        return dp[ns][np];
    }

bool helperMatch(string &s, string &p, int i, int j);
bool isMatch2(string s, string p) {
    // int ns = s.size();
    // int np = p.size();
    // if(ns == 0 && np == 0) return true;
    // if(ns == 0 && np != 0) return false;
    // if(ns != 0 && np == 0) return false;
    // if(p[0] == '*') return false;
    return helperMatch(s, p, 0, 0);
}

bool helperMatch(string &s, string &p, int i, int j){
    int ns = s.size();
    int np = p.size();
    if(np == j){
        if(ns == i) return true;
        return false;
    }
    // if(i >= ns && j < np) return false;
    bool one = false, zero = false;
    if(j + 1 < np && p[j+1] == '*'){
        zero = helperMatch(s, p, i, j+2);
        if(!zero && (i < ns) && (p[j] == s[i] || p[j] == '.')){
            one = helperMatch(s, p, i+1, j);
        }
        return zero || one;
    }else{
        if((i < ns) && (p[j] == s[i] || p[j] == '.')){
            return helperMatch(s, p, i+1, j+1);
        }else{
            return false;
        }
    }
    return false;
}
// bool isMatch(string s, string p)
// {
//     if (p.empty())
//     {
//         return s.empty();
//     }
//     if ('*' == p[1])
//     {
//         return isMatch(s, p.substr(2)) || (!s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p));
//     }
//     else
//     {
//         return !s.empty() && (s[0] == p[0] || '.' == p[0]) && (isMatch(s.substr(1), p.substr(1)));
//     }
// }

int main()
{
    string s,p;
    cin >> s >> p;
    bool result = isMatch(s, p);
    printf("%d", result);

    return 0;
}