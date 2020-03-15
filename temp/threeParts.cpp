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

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int res = 0;
        for(auto a : A){
            res += a;
        }
        if(res % 3 != 0) return false;
        int val = res / 3;
        int left = 0, right = A.size() - 1;
        int cand1 = A[left], cand2 = A[right];
        while(left + 1 < right){
            if(cand1 == val &&  cand2 == val) return true;
            if(cand1 != val){
                cand1 += A[++left];
            }
            if(cand2 != val){
                cand2 += A[--right];
            }
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1,-1,1,-1};
    Solution a;
    bool r = a.canThreePartsEqualSum(nums);
    cout << r << endl;
    return 0;
}