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
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = 0;
        int l = 0, r = nums.size();
        // left
        while(l < r){
            int mid = (l + r) / 2;
            if(nums[mid] == target){
                r = mid;
            }else if(nums[mid] < target){
                l = mid + 1;
            }else if(target < nums[mid]){
                r = mid;
            }
        }
        if(l == nums.size()) s = -1;
        s = (s != -1 && nums[l] == target) ? l : -1;

        l = 0, r = nums.size();
        // right
        while(l < r){
            int mid = (l + r) / 2;
            if(nums[mid] == target){
                l = mid + 1;
            }else if(nums[mid] < target){
                l = mid + 1;
            }else if(target < nums[mid]){
                r = mid;
            }
        }
        if(r == 0) e = -1;
        e = (e != -1 && nums[r-1] == target) ? r-1 : -1;
        return {s, e};
    }

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    // int n, t;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }
    vector<int> result = searchRange(nums, 7);
    printf("%d", result[0]);

    return 0;
}