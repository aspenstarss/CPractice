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

    vector<vector<string>> res;

    bool ispar(string s){
        int left = 0;
        int right = s.length() - 1;
        while(left <= right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    void backtrace(string s, vector<string> &substring){
        if(s == ""){
            res.push_back(substring);
            return;
        }

        for(int i = 1; i <= s.length(); i++){
            string cur = s.substr(0, i);
            substring.push_back(cur);
            if(ispar(cur))
                backtrace(s.substr(i, s.length() - i), substring);
            substring.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> substring;
        backtrace(s, substring);
        return res;
    }

int main()
{
    string s = "aab";
    vector<vector<string>> r;
    r = partition(s);
    for(auto t : r){
        for(auto p : t){
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}
    
