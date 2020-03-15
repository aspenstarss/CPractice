#include "bits/stdc++.h"
#define F           first
#define S           second
#define endl        "\n"
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(),x.end()
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = 1;
        }

        int res = 0;
        for(int i = 1; i < n + 1; i++){
            for(int j = i - 1; j > 0; j--){
                if(nums[j-1] < nums[i-1]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};

int main()
{
    vector<int> nums{10,9,2,5,3,7,101,18,2,5,3,7,101,102};
    Solution a;
    int result = a.lengthOfLIS(nums);
    cout << result << endl;

    return 0;
}