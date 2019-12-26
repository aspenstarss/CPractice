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

bool isPalindrome(int x) {
    if(x < 0) return false;
    int t = x, x2 = 0;
    while(t != 0){
        if(x2 > INT_MAX / 10 || (x2 == INT_MAX / 10 && (t % 10) > 7)) return false;
        x2 = x2 * 10 + (t % 10);
        t /= 10;
    }
    if(x == x2) return true;
    return false;
}

int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);

    return 0;
}