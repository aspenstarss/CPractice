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

    int missingNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res -= nums[i];
            res += i;
        }
        return res + nums.size();
    }

int main()
{
    vector<int> nums{3,0,1};
    
    int result = missingNumber(nums);
    cout << result << endl;

    return 0;
}