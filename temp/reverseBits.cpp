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
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        uint32_t mask = 1;
        for(int i = 0; i < 32; i++){
            if((n & mask) != 0){
                res += 1;
            }
            res <<= 1;
            mask <<= 1;
        }
        return res;
    }

int main()
{
    uint32_t nums = 43261596;
    uint32_t result = reverseBits(nums);
    cout << result << endl;

    return 0;
}