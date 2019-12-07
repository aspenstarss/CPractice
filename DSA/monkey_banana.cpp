#include <bits/stdc++.h>
using namespace std;

int mb(vector<char> nums, int k){
    int n = nums.size();
    if(n < 2) return 0;
    int res = 0;
    int l, r;
    int eated[n];
    for(int i = 0; i < n; i++){
        eated[i] = (nums[i] == 'B') ? -1 : -2;
    }

    for(int i = 0; i < n; i++){
        if(nums[i] == 'B') continue;
        l = i - k > 0 ? i - k : 0;
        r = i + k < n ? i + k : n-1;
        for(int j = l; j <= r; j++){
            if(nums[j] == 'B' && eated[j] == -1){
                eated[j] = i;
                res++;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << eated[i] << ' ';
    }
    
    return res;
}
    
int main(){
    vector<char> nums;
    char t;
    cin >> t;
    nums.push_back(t);
    
    while(1){
        t = cin.get();
        if(t == '\n') break;
        nums.push_back(t);
    }
    int k;
    scanf("%d", &k);
    int result = mb(nums, k);
    printf("%d", result);
    return 0;
}