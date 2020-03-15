#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int n = s.length();
    if(n <= 1) return s;
    int rl, rr, res = 0;
    if(s[0] != s[1]){
        res = 1;
        rl = 0;
        rr = 0;
    }
    for(int i = 0; i < n; i++){
        int cur = 1;
        for(int j = 1; j < n / 2 + 1 && i - j >= 0 && i + j < n; j++){
            if(s[i - j] == s[i + j]){
                cur += 2;
                if(cur > res){
                    res = cur;
                    rl = i - j;
                    rr = i + j;
                }
            }else{
                break;
            }
        }
        cur = 0;
        for(int j = 1; j < n / 2 + 1 && i - j + 1 >= 0 && i + j < n; j++){
            if(s[i - j + 1] == s[i + j]){
                cur += 2;
                if(cur > res){
                    res = cur;
                    rl = i - j + 1;
                    rr = i + j;
                }
            }else{
                break;
            }
        }
    }
    string r = "";
    for(int i = rl; i <= rr; i++){
        r += s[i];
    }
    cout << r;
    return r;
}

int main(){
    string s = "bb";
    longestPalindrome(s);
    return 0;
}