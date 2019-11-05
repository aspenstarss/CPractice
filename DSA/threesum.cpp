#include <bits/stdc++.h>

using namespace std;

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> res;
        vector<int> t(3);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if((i > 0) && (nums[i] == nums[i -1])) continue;

            int target = 0 - nums[i];
            int n, m, sum;
            n = i + 1;
            m = nums.size() - 1;
            
            while(n < m){
                if(nums[n] + nums[m] > target)
                    m--;
                else if(nums[n] + nums[m] < target)
                    n++;
                else
                {
                    t[0] = nums[i];
                    t[1] = nums[n];
                    t[2] = nums[m];
                    res.push_back(t);
                    while((n < m) && (n+1 < nums.size()) && (nums[n] == nums[n+1])) n++;
                    while((n < m) && (m+1 < nums.size()) && (nums[m] == nums[m+1])) m--;
                    n++;
                    m--;
                } 
            }
        }
        return res;
    }
};

    vector<vector<int>> threeSum2(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if((i > 0) && (nums[i] == nums[i -1])) continue;

            int target = 0 - nums[i];
            int n = i + 1;
            int m = nums.size() - 1;
            vector<int> tmp;
            while(n < m){
                if(nums[n] + nums[m] > target)
                    m--;
                else if(nums[n] + nums[m] < target)
                    n++;
                else
                {
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[n]);
                    tmp.push_back(nums[m]);
                    res.push_back(tmp);
                    while(n < m && nums[n] == nums[n+1]) n++;
                    while(n < m && nums[m] == nums[m+1]) m--;
                    n++;
                    m--;
                } 
            }
        }
        return res;
    }
int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
	vector<int> nums2 = { 1,4,7, 9 };
	
	Solution solution;
	vector<vector<int>> res;
    res = solution.threeSum(nums);
    // printf("%f", res);
	return 0;
}