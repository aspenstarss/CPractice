#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;

int func(int nums[]);
    
int main(){
    int nums[MAXN];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    int result = func(nums);
    printf("%d", result);
    return 0;
}
