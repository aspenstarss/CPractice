#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int helper(vector<int>& nums, int left, int right);
void merge(vector<int>& nums, int left, int mid, int right);

int reversePairs(vector<int>& nums) {
    int len = nums.size();
    return helper(nums, 0, len - 1);
}

int helper(vector<int>& nums, int left, int right){
    if(left >= right) return 0;
    int mid = (left + right) / 2;
    int ans = 0;

    ans += helper(nums, left, mid);
    ans += helper(nums, mid + 1, right);
    int j = left;
    // for(int i = mid + 1; i <= right; i++){
    //     while (j <= mid && nums[j] <= nums[i] * 2LL)
    //     {
    //         j++;
    //     }
    //     ans += mid - j + 1;        
    // }
    int i = mid + 1;
    while(i <= right && j <= mid){
        if(nums[j] <= nums[i] * 3LL){
            j++;
        }else
        {
            ans += mid - j + 1;
            i++;
        }        
    }
    merge(nums, left, mid, right);
    return ans;
}

void merge(vector<int>& nums, int left, int mid, int right){
    int len_l = mid - left + 1;
    int len_r = right - mid;
    int L[len_l], R[len_r];

    for(int i = 0; i < len_l; i++)
        L[i] = nums[left + i];
    for(int i = 0; i < len_r; i++)
        R[i] = nums[mid + 1 + i];
    int i = 0, j = 0;
    for(int k = left; k <= right; k++){
        if((j >= len_r) || (i < len_l && L[i] < R[j])){
            nums[k] = L[i++];
        }else
        {
            nums[k] = R[j++];
        }        
    }
}
    
int main(){
    // int nums[MAXN];
    vector<int> nums;
    int n, tmp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        nums.push_back(tmp);
    }
   
    int result = reversePairs(nums);
    printf("%d", result);
    return 0;
}