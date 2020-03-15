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

    unsigned int helper(unsigned int a, unsigned int b, unsigned int k){
        unsigned int res = 0;
        if(a >= b){
            // if(b > ((INT_MAX >> 1) + 1)) return 0;
            a= a - b;
            res = k + helper(a, b << 1, k << 1);
        }else{
            if(k == 1) return 0;
            res = helper(a, b >> 1, k >> 1);
        }
        return res;
    }

    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        unsigned int t1 = dividend;
        unsigned int t2 = divisor;
        bool flag = false;
        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
            flag = true;
        }
        unsigned int res;
        res = helper(t1, t2, 1);
        return flag ? -res : res;
        
    }
    
int main()
{
    int a, b;
    cout << INT_MIN << ' ' << INT_MAX << ' ' << ((INT_MAX >> 1) + 1) << endl;
    cin >> a >> b;
    // int c = INT_MIN >> 1;
    // int d = INT_MIN / 2;
    int result = divide(a, b);
    printf("%d", result);

    return 0;
}