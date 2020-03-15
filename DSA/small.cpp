#include <bits/stdc++.h>
using namespace std;

int sub(int a, int b){
    if(a % b == 0)
        return a / b;
    else
        return a / b + 1;
}

bool check(vector<int>& nums, int a, int t){
    int n = nums.size();
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += sub(nums[i], a);
    }
    if(sum <= t){
        return true;
    }else{
        return false;
    }
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    // int sum = 0;
    // for(int i = 0; i < n; i++){
    //     sum += nums[i];
    // }
    if(check(nums, 1, threshold)) return 1;

    int min = 1;
    int max = nums[n-1];
    int mid;
    
    while(min <= max){
        mid = (min + max) / 2;
        if(check(nums, mid, threshold)){
            if(!check(nums, mid-1, threshold)){
                return mid;
            }else{
                max = mid - 1;
            }
        }else{
            min = mid + 1;
        }
    }
    return 0;
}
    
int main(){
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }
    scanf("%d", &t);

    int result = smallestDivisor(nums, t);
    printf("%d", result);
    return 0;
}

    
