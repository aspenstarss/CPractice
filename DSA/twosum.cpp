#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> nums_sorted;
    nums_sorted.assign(nums.begin(), nums.end());
    sort(nums_sorted.begin(), nums_sorted.end());

    int i = 0;
    int j = nums.size() - 1;
    int sum;
    
    while(i < j){
        sum = nums_sorted[i] + nums_sorted[j];
        if(sum == target){
            break;
        }
        if(sum > target){
            j--;
        }
        if(sum < target){
            i++;
        }
    }

    int r1, r2;
    vector<int> re;
    for(int k = 0; k < nums.size(); k++){
        if(nums_sorted[i] == nums[k] || nums_sorted[j] == nums[k]){
            re.push_back(k);
        }
    }

    r1 = re[0];
    r2 = re[1];
    if(r1 < r2){
        re[0] = r1;
        re[1] = r2;
    }else{
        re[0] = r2;
        re[1] = r1;
    }
    return re;
}

vector<int> twoSum2(vector<int>& nums, int target){
    unordered_map<int, int> vis;
    int f;
    for(int i = 0; i < nums.size(); i++){
        f = target - nums[i];
        unordered_map<int, int>::iterator it = vis.find(f);
        if(it != vis.end()){
            return vector<int>{vis[f], i};
        }
        vis[nums[i]] = i;
    }
}

int main(){
    int n, target;
    int t;
    scanf("%d", &n);
    scanf("%d", &target);
    vector<int> nums;
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }
    vector<int> result;
    result = twoSum2(nums, target);
    printf("%d %d", result[0], result[1]);
    return 0;
}