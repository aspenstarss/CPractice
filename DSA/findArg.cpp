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

    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> needs;
        unordered_map<char, int> window;
        vector<int> res;
        int left = 0, right = 0, match = 0;
        for(auto c : p) needs[c]++;
        while(right < p.length()){
            char c = s[right];
            if(needs.find(c) != needs.end()){
                window[c]++;
                if(window[c] == needs[c]){
                    match++;
                }
            }
            right++;
        }
        char inc, outc;
        while(right < s.length()){
            if(match == needs.size()){
                res.push_back(left);
            }
            inc = s[right];
            outc = s[left];
            if(inc == outc){
                left++;
                right++;
                continue;
            }

            if(needs.find(outc) != needs.end()){
                if(window[outc] == needs[outc]){
                    match--;
                }
                window[outc]--;
            }
            left++;

            inc = s[right];
            if(needs.find(inc) != needs.end()){
                window[inc]++;
                if(window[inc] == needs[inc]){
                    match++;
                }
            }
            right++;            
        }
        return res;
    }

int main()
{
    string s, p;
    // cin >> s >> p;
    s = "abab";
    p = "ab";
    vector<int> res;
    res = findAnagrams(s, p);
    for(auto n : res){
        cout << n << " ";
    }

    return 0;
}