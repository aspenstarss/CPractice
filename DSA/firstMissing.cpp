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

    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 1;
        bool hasOne = false;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                hasOne = true;
                break;
            }
        }
        if(!hasOne) return 1;

        for(int i = 0; i < n; i++){
            if(nums[i] > n || nums[i] <= 0) nums[i] = 1;
        }
        
        for(int i = 0; i < n; i++){
            nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
        }

        for(int i = 0; i < n; i++){
            if(nums[i] > 0) return i + 1;
        }
        return n + 1;
    }

     void swap(vector<int>& nums, int a, int b){
        int t;
        t = nums[a];
        nums[a] = nums[b];
        nums[b] = t;
    }

    int firstMissingPositive2(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            // if(nums[i] == i + 1 || nums[i] <= 0 || nums[i] > n) continue;
            // swap(nums, i, nums[i] - 1);
            while(nums[i] != i + 1 && nums[i] > 0 && nums[i] <= n){
                swap(nums, i, nums[i] - 1);
            }
        }
        int res = n;
        for(int i = 0; i < n; i++){
            if(nums[i] == i + 1) continue;
            return i + 1;
        }
        return n + 1;
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
    int result = firstMissingPositive(nums);
    printf("%d", result);

    return 0;
}