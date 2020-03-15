// #include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>

using namespace std;
const int MAXN = 1000;
int helper(int nums[], int left, int right);

int findMin(int nums[], int n) {
        int len = n;
        return helper(nums, 0, len);
    }
    
int helper(int nums[], int left, int right){
    int last = nums[right];
    int mid = (left + right) / 2;
    if(nums[mid] > last){
        return helper(nums, mid + 1, right);
    }
    if(nums[mid] < last){
        return helper(nums, left, mid);
    }
    return nums[mid];
}

int main(){
    int nums[MAXN];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    // for(int i = 0; i < n; i++){
    //     printf("%d ", nums[i]);
    // }
    int result = findMin(nums, n-1);
    printf("%d", result);
    return 0;
}