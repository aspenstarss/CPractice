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
vector<string> helper(vector<string> before, string digits, int k);
vector<string> panel = {"0", "0", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> letterCombinations(string digits) {
    vector<string> res;
    vector<string> before = {""};
    res = helper(before, digits, 0);
    return res;
}
vector<string> helper(vector<string> before, string digits, int k){
    vector<string> res;
    for(int i = 0; i < before.size(); i++){
        for(int j = 0; j < panel[digits[k]-'0'].length(); j++){
            string temp = panel[digits[k]-'0'];
            string t = before[i]+temp[j];
            res.push_back(t);
        }
    }
    if(k < digits.length()-1)
        res = helper(res, digits, k+1);
    return res;
}

int main()
{
    string digits = "23";
    vector<string> res = letterCombinations(digits);
    return 0;
}