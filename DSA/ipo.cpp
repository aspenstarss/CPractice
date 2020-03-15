#include <bits/stdc++.h>
using namespace std;
    
struct cmp1{
    bool operator ()(pair<int, int> &a, pair<int, int> &b){
        return a.second > b.second;
    }
};

struct cmp2{
    bool operator ()(pair<int, int> &a, pair<int, int> &b){
        return a.first < b.first;
    }
};

int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
    int n = Profits.size();
    if(n == 0 || k == 0) return 0;
    k = (k <= n) ? k : n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp1> cap;
    for(int i = 0; i < n; i++){
        cap.push(make_pair(Profits[i], Capital[i]));
    }
    if(cap.top().second > W) return W;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp2> pro;
    for(int i = 0; i < k; i++){
        while(!cap.empty() && cap.top().second <= W){
            pro.push(cap.top());
            cap.pop();
        }
        W += pro.top().first;
        pro.pop();
    }
    return W;    
}

int main(){
    vector<int> nums1;
    vector<int> nums2;
    int n1, n2, t;
    int k, W;
    scanf("%d", &k);
    scanf("%d", &W);
    scanf("%d", &n1);
    for(int i = 0; i < n1; i++){
        scanf("%d", &t);
        nums1.push_back(t);
    }
    scanf("%d", &n2);
    for(int i = 0; i < n2; i++){
        scanf("%d", &t);
        nums2.push_back(t);
    }

    int result = findMaximizedCapital(k, W,nums1, nums2);
    printf("%d", result);
    return 0;
}