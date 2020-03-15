#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        if(n == 1) return 1;
        int l = 0;
        int r = n - 1;
        int boat = 0;
        int more;
        sort(people.begin(), people.end());
        while(l <= r){
            boat++;                
            more = limit - people[r--];
            while(l <= r){
                if(more >= people[l]){
                    more -= people[l++]; 
                }else{
                    break;
                }
            }
        }
        return boat;
    }
    
int main(){
    vector<int> nums;
    int n, t, l;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }
    scanf("%d", &l);

    int result = numRescueBoats(nums, l);
    printf("%d", result);
    return 0;
}

