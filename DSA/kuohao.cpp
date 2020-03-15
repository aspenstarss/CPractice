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

    bool isValid(string s) {
        if(s == "") return true;
        int n = s.length();
        stack<char> a;
        int i = 0;
        while(i < n){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                a.push(s[i]);
            }else{
                char t = a.top();
                if((t == '(' && s[i] == ')') || (t == '{' && s[i] == '}') || (t == '[' && s[i] == ']')){
                    a.pop();
                }else{
                    return false;
                }
            }
            i++;
        }
        return true;
    }

int main()
{
    string s;
    cin >> s;
    cout << isValid(s);

    return 0;
}