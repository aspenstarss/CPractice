#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1000;
int trap(int height[], int n) {
        int i = 0;
        int j = n - 1;
        int leftmax = 0;
        int rightmax = 0;
        int ans = 0;
        while(i <= j){
            if(leftmax > rightmax){                
                rightmax = max(rightmax, height[j]);
                ans += rightmax - height[j];
                j--;
            }else{
                leftmax = max(leftmax, height[i]);
                ans += leftmax - height[i];
                i++;
            }
        }
        return ans;
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
    int result = trap(nums, n);
    printf("%d", result);
    return 0;
}