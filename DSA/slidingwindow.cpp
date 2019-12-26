#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums);
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> res;
    deque<int> dq;
    if(n == 0) return res;

    for(int i = 0; i < k; i++){
        while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);

    for(int i = k; i < nums.size(); i++){
        while(!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
        dq.push_back(i);
        res.push_back(nums[dq[0]]);
    }
    return res;
}

int main(){
    vector<int> nums = {9,10,9,-7,-4,-8,2,-6};
    int n, t = 5;
    // scanf("%d", &n);
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &t);
    //     nums.push_back(t);
    // }

    vector<int> result = maxSlidingWindow(nums, t);
    // printf("%d", result);
    return 0;
}
