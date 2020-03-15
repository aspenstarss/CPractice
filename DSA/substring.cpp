#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 1;
        int j = 1;
        int res = 0, now = 0;
        unordered_map<char, int> nows;
        while(i <= n && j <= n){
            i = max(nows[s[j-1]] + 1, i);
            res = max(j - i + 1, res);
            nows[s[j-1]] = j;
            j++;
        }
        return res;
}
    
int main(){
    // vector<int> nums;
    // int n, t;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }
    string s = "alouzxilkaxkufsu";

    int result = lengthOfLongestSubstring(s);
    printf("%d", result);
    return 0;
}
