#include <bits/stdc++.h>
using namespace std;

long stock(vector<long> nums){
    int n = nums.size();
    if(n < 2) return 0;
    long res = 0;
    for(int i = 1; i < n; i++){
        if(nums[i-1] < nums[i]){
            res += nums[i] - nums[i-1];
        }
    }
    return res;
}
    
int main(){
    vector<long> nums;
    long t;
    cin >> t;
    nums.push_back(t);
    // scanf("%d", &n);
    while(cin.get() != '\n'){
        cin >> t;
        nums.push_back(t);
    }
    long result = stock(nums);
    printf("%ld", result);
    return 0;
}