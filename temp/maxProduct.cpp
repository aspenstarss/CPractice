#include "bits/stdc++.h"
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;

    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mindp = 1, maxdp = 1;
        int res = INT_MIN;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                maxdp = maxdp * nums[i];
                mindp = mindp * nums[i];
            }else{
                int t = maxdp;
                maxdp = max(mindp * nums[i], nums[i]);
                mindp = min(t * nums[i], nums[i]);
            }
            res = max(res, maxdp);
            if(maxdp == 0 || mindp == 0){
                maxdp = mindp = 1;
            }
        }
        return res;
    }

int main()
{
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }
    int result = maxProduct(nums);
    cout << result << endl;

    return 0;
}