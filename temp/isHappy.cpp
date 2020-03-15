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

    long newNum(int n){
        long res = 0;
        while(n){
            int cur = n % 10;
            res += pow(cur, 2);
            n /= 10;
        }
        return res;
    }

    bool isHappy(int n) {
        int slow, fast;
        slow = n;
        fast = n;
        do{
            slow = newNum(slow);
            if(slow == 1) return true;
            fast = newNum(newNum(fast));
        }while(fast != slow);
        return false;
    }

int main()
{
    int n = 45;
    // cin >> n;
    bool result = isHappy(n);
    cout << result << endl;

    return 0;
}