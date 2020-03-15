#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums);
    
int main(){
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }

    int result = func(nums);
    printf("%d", result);
    return 0;
}