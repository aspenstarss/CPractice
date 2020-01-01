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
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int nh = haystack.length();
        int nn = needle.length();
        unordered_map<char, int> in;
        for(int i = 0; i < needle.length(); i++){
            if(in.find(needle[i]) == in.end()){
                in.insert({needle[i], i});
            }else{
                in[needle[i]] = i;
            }
        }
        int i = 0;
        while(i < haystack.length()){
            for(int j = 0; j < needle.length(); j++){
                if(haystack[i+j] != needle[j]){
                    if(i + nn < nh && in.find(haystack[i + nn]) == in.end()){
                        i = i + nn;
                    }else if(i + nn >= nh){
                        return -1;
                    }else{
                        i = i + nn - in[haystack[i + nn]];
                    }
                    break;
                }
                if(j == needle.length() - 1){
                    return i;
                }
            }
        }
        return -1;
    }

int main()
{
    string h, n;
    cin >> h >> n;
    int result = strStr(h, n);
    printf("%d", result);

    return 0;
}