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

void helper(string s, int l, int r, int n);
vector<string> res;
    vector<string> generateParenthesis(int n){
        helper("", 0, 0, n);
        return res;
    }
    
    void helper(string s, int l, int r, int n){
        if(l == n && r == n){
            res.push_back(s);
        }
        
        if(l < n){
            helper(s + '(', l+1, r, n);
        }
        if(r < n && r < l){
            helper(s + ')', l, r+1, n);
        }
    }

    vector<string> generateParenthesis2(int n){
        if(n == 0) return {};
        vector<string> res = {"()"};
        int i = 1;
        while(i < n){
            vector<string> t;
            for(int i = 0; i < res.size(); i++){
                string pa = res[i];
                
                string t1, t2, t3;
                t1 = pa + "()";
                t2 = "(" + pa + ")";
                t3 = "()" + pa;
                t.push_back(t1);
                t.push_back(t2);
                if(i != 0){
                    t.push_back(t3);
                }
            }
            // string pa;
            // for(int i = 0; i < res.size(); i++){
            //     pa = res[i]; 
            //     string t1;
            //     t1 = "(" + pa + ")";
            //     t.push_back(t1);
            // }
            // for(int i = 0; i < res.size(); i++){
            //     pa = res[i]; 
            //     string t1;
            //     t1 = pa + "()";
            //     t.push_back(t1);
            // }
            // for(int i = 0; i < res.size()-1; i++){
            //     pa = res[i]; 
            //     string t1;
            //     t1 = "()" + pa;
            //     t.push_back(t1);
            // }
            res.clear();
            res.assign(t.begin(), t.end());
            i++;
        }
        return res;
    }

int main()
{
    int n;
    scanf("%d", &n);
    vector<string> result = generateParenthesis(n);
    // printf("%d", result);

    return 0;
}