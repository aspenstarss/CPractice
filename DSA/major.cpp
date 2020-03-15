#include <bits/stdc++.h>
#define MAXN 5000001
using namespace std;
int nums[MAXN];

int majorityElement(int nums[], int n) {
    int flag = nums[0];
    int count = 0;
    for(int i = 0; i < n; i++){
        if(flag == nums[i]){
            count++;
        }else{
            count--;
            if(count == 0){
                flag = nums[i];
                count++;
            }
        }
    }
    return flag;            
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    int result = majorityElement(nums, n);
    printf("%d", result);
    return 0;
}

