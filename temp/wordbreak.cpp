#include "bits/stdc++.h"
#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define memset(a, b) memset(a, b, sizeof(a));
using namespace std;
const int inf = 0x3f3f3f3f;
const int MAXN = 0x7fffffff;

    vector<string> res;
    vector<bool> dp;

    void backtrace(string s, vector<string> &words, int k, unordered_set<string> &dict){
        if(s == ""){
            string r = "";
            for(auto word : words) r = r + word + " ";
            res.push_back(r.substr(0, r.length() - 1));
            return;
        }

        for(int i = 1; i <= s.length(); i++){
            words.push_back(s.substr(0, i));
            string tmp = s.substr(0, i);  // 剪枝重点！
            if(dp[i + k] && dict.find(tmp) != dict.end()){
                backtrace(s.substr(i, s.length() - i), words, k + i, dict);
            }
            words.pop_back();
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.empty()) return {};
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        
        int n = s.size();
        int maxLength = wordDict[0].size();

        for(auto word : wordDict){
            if(word.length() > maxLength)
                maxLength = word.length();
        }
        dp.push_back(true);

        for(int i = 1; i <= n; i++){
            dp.push_back(false);
            for(int j = max(i - maxLength, 0); j < i; j++){
                if(dp[j] && dict.find(s.substr(j, i - j)) != dict.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        if(!dp[n]) return {};
        vector<string> words;
        backtrace(s, words, 0, dict);
        return res;
    }

int main()
{
    vector<string> words{"apple","pen","applepen","pine","pineapple"};
    string s = "pineapplepenapple";

    vector<string> result = wordBreak(s, words);
    // cout << result << endl;

    return 0;
}