#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
    if(n < 10) return 0;
    
    vector<int> nums;
    int t;
    while(true){
        t = n % 10;
        nums.push_back(t);
        if(n < 10) break;
        n = n / 10;  
    }
    
    int k = nums.size();
    int m = 1, s = 0;
    for(int i = 0; i < k; i++){
        m *= nums[i];
        s += nums[i];
    }
    return m - s;
}

int main(){
    vector<int> nums;
    int n;
    scanf("%d", &n);
    int result = subtractProductAndSum(n);
    printf("%d", result);
    return 0;
}