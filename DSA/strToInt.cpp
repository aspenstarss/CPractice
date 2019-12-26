#include<bits/stdc++.h>
//typedef long long ll;
//#define ull       unsigned long long
//#define int       long long
#define F           first
#define S           second
#define endl        "\n"
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(),x.end()
#define memset(a,b) memset(a,b,sizeof(a));
#define IOS         ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;
const long long INF = 0x3f3f3f3f3f3f3f3fLL;
void file(){
    #ifdef ONLINE_JUDGE
    #else
        freopen("cin.txt","r",stdin);
        //  freopen("cout.txt","w",stdout);
    #endif
}

int myAtoi(string str) {
    int n = str.length(), i = 0;
    int v = 0, t;
    bool flag = false;// is negtive?
    // '0' is 48, '9' is 57
    while(str[i] == ' ') i++;
    if(str[i] == '-') flag = true;
    if(str[i] == '+' || str[i] == '-') i++;
    while(i < n && isdigit(str[i])){
        t = str[i] - 48;
        // 判断是否溢出,这里很巧妙，因为t=7,和t=8的时候可以合并，减少一个判断
        if(v > 0x7fffffff / 10 || (v == 0x7fffffff / 10 && t > 7))
                return flag ? INT_MIN : INT_MAX;
        // if(!flag && (v > 0x7fffffff / 10 || (v == 0x7fffffff / 10 && str[i] - 48 >= 7)))
        //     return 0x7fffffff;
        // else if(flag && (-v < INT_MIN / 10 || (-v == INT_MIN / 10 && str[i] - 48 >= 8)))
        //     return INT_MIN;
        v = v * 10 + t;
        i++;
    }
    return flag ? -v : v;
}

int myAtoi2(string str) {
    int n = str.length(), i = 0;
    int v = 0;
    bool flag = false, fmin = false;  // is negtive?
    // '0' is 48, '9' is 57
    // 检查开头是否合法，否则返回0
    while(i < n && (str[i] > 57 || str[i] < 48)){
        if(str[i] != '-' && str[i] != '+' && str[i] != ' ') return 0;
        if(str[i] == '-' || str[i] == '+') break;
        i++;
    }
    // 是否到末尾
    if(i >= n) return 0;
    if(i < n && (str[i] > 57 || str[i] < 48)){
        if(str[i] != '-' && str[i] != '+')
            return 0;
    }
    //正负号记录
    if(str[i] == '-') {flag = true; i++;}
    else if(str[i] == '+') i++;
    // 数值累加
    for(; i < n; i++){
        if(str[i] > 57 || str[i] < 48) break;
        // 判断是否溢出
        if(!flag && (v > 0x7fffffff / 10 || (v == 0x7fffffff / 10 && str[i] - 48 >= 7))){
            v = 0x7fffffff;
            break;
        }
        else if(flag && (-v < INT_MIN / 10 || (-v == INT_MIN / 10 && str[i] - 48 >= 8))){
            v = INT_MIN;
            fmin = true;
            break;
        }
        v *= 10;
        v += str[i] - 48;
    }
    if(flag && !fmin) v = -v;
    return v;
}

int main()
{
    string str;
    cin >> str;
    int result = myAtoi(str);
    printf("%d", result);

    return 0;
}