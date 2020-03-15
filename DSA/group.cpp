#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
        return a.first < b.first;
}

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    int n = groupSizes.size();
    vector<pair<int, int>> group;
    for(int i = 0; i < n; i++){
        group.push_back({groupSizes[i], i});
    }
    sort(group.begin(), group.end(), cmp);
    
    vector<vector<int>> r;
    for(int i = 0; i < n; i++){
        vector<int> g;
        int k = group[i].first;
        for(int j = 0; j < k; j++){
            g.push_back(group[i + j].second);
        }
        r.push_back(g);
        i = i + k - 1;
    }
    return r;
}
    
int main(){
    vector<int> nums;
    int n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums.push_back(t);
    }

    vector<vector<int>> result = groupThePeople(nums);
    // printf("%d", result);
    return 0;
}
