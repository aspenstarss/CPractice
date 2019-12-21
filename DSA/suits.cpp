#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;

int suits(vector<int> nums){
    // if(nums[0] > nums[3]) nums[3] = nums[1];
    int maxy, maxx, maxs;
    int value;
    maxx = min(nums[0], nums[3]);
    maxy = min(nums[1], min(nums[2], nums[3]));
    int e = nums[4], f = nums[5], d = nums[3];
    maxs = min(d, maxx+maxy);
    int x, y;
    if(e < f) {
        x = 0;
        if(maxs - x > maxy){
            y = maxy;
            x = maxs - y > maxx ? maxx : maxs-y;
        }else{
            y = maxs - x;
            x = 0;
        }
    }else{
        y = 0;
        if(maxs - y > maxx){
            x = maxx;
            y = maxs - x > maxy ? maxy : maxs-x;
        }else{
            x = maxs - y;
        }
    }
    return (e-f)*x+f*maxs;
}
    
int main(){
    vector<int> nums(6, 0);
    // int n;
    // scanf("%d", &n);
    for(int i = 0; i < 6; i++){
        scanf("%d", &nums[i]);
    }

    int result = suits(nums);
    printf("%d", result);
    return 0;
}