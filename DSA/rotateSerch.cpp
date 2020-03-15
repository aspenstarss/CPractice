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
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return -1;
        if(n == 1){
            if(nums[0] == target) return 0;
            return -1;
        }
        int l = 0, r = n - 1;
        int mid;
        while(l < r){
            mid = (l + r) / 2;
            if(mid == l || mid == r){
                if(nums[l] == target) return l;
                if(nums[r] == target) return r;
                return -1;
            }
            if(nums[l] <= nums[mid]){
                if(nums[l] <= target && target <= nums[mid]){
                    r = mid;
                    continue;
                }else{
                    l = mid;
                    continue;
                }
            }else{
                if(nums[mid] <= target && target <= nums[r]){
                    l = mid;
                    continue;
                }else{
                    r = mid;
                    continue;
                }
            }
        }
        if(nums[mid] != target) return -1;
        return mid;
        
    }

int main()
{
    vector<int> nums = {1, 3};
    // int n, t;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }
    int result = search(nums, 3);
    printf("%d", result);

    return 0;
}