#include <bits/stdc++.h>
using namespace std;

int helper(vector<int>& ratings){
    int n = ratings.size();
    int now[n];
    now[0] = 1;
    for(int i = 1; i < n; i++){
        if(ratings[i-1] < ratings[i]){
            now[i] = now[i-1] + 1;
        }else{
            now[i] = 1;
        }
    }

    int now2[n];
    now2[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        if(ratings[i] > ratings[i+1]){
            now2[i] = now2[i+1] + 1;
        }else{
            now2[i] = 1;
        }
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        total += max(now[i], now2[i]);
    }

    return total;
}
int func(vector<int>& ratings){
    int n = ratings.size();
    int now = 1;
    int total = 0;

    for(int i = 0; i < n-1; i++){
        if(ratings[i] < ratings[i+1]){
            total += now;
            now++;
        }else{
            int k = 0, m = 0;
            while (i+k+1 < n && ratings[i+k] >= ratings[i+k+1])
            {
                k++;
                if(ratings[i+k-1] == ratings[i+k]){
                    continue;
                }
                m++;
            }
            total += max(now, m+1);
            now = m;
        }
    }

    if(ratings[n-2] >= ratings[n-1]){
        total += 1;
    }else if(ratings[n-2] < ratings[n-1]){
        total += 2;
    }

    return total;
    
}
    
int main(){
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }

    int result = helper(nums);
    printf("%d", result);
    return 0;
}