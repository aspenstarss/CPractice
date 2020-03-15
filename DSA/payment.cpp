#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

void payment(vector<vector<long>>& num){
    long n = num.size();
    for(int i = 0; i < n; i++){
        vector<long> nums = num[i];
        long d = nums[3] / nums[2];
        long k = min(d, nums[0]);
        if(nums[3] - nums[2] * k > nums[1]){           
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }   
    }
    return ;
}
    
int main(){
    int n;
    long t;
    scanf("%d", &n); 
    vector<vector<long>> nums;
    for(int i = 0; i < n; i++){
        vector<long> num;
        for(int j = 0; j < 4; j++){
            scanf("%ld", &t);
            num.push_back(t);
        }
        nums.push_back(num);  
    }
    payment(nums);
    return 0;
}