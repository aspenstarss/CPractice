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

    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        slow = nums[slow];
        fast = nums[nums[fast]];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        int pre1 = 0;
        int pre2 = slow;
        while(pre1 != pre2){
            pre1 = nums[pre1];
            pre2 = nums[pre2];
        }
        return pre1;
    }

    int findDuplicate2(vector<int>& nums) {
        int r = nums.size() - 1;
        int l = 1;
        int mid;
        while(l < r){
            int count = 0;
            mid = (l + r) >> 1;
            for(auto num : nums){
                if(num <= mid){
                    count++;
                }
            }
            if(count > mid){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }

int main()
{
    vector<int> nums{2,1,3,4,2};
    // int n, t;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }
    int result = findDuplicate(nums);
    cout << result << endl;

    return 0;
}