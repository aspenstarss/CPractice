#include "bits/stdc++.h"
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

    int evalRPN(vector<string>& tokens) {
        if(tokens.empty()) return 0;
        stack<int> s;
        int res = 0;
        int lv, rv;
        for(auto token : tokens){
            if(isdigit(token[0]) || (token.length() > 1)){
                s.push(stoi(token));
            }else{
                rv = s.top();s.pop();
                lv = s.top();s.pop();
                if(token == "+") res = lv + rv;
                if(token == "-") res = lv - rv;
                if(token == "*") res = lv * rv;
                if(token == "/") res = lv / rv;
                s.push(res);
            }
        }
        return s.top();
    }

int main()
{
    vector<string> nums{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    // int n, t;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }
    int result = evalRPN(nums);
    cout << result << endl;

    return 0;
}