#include <bits/stdc++.h>
using namespace std;

static bool cmp(const pair<int, int> &a, const pair<int, int> &b){
        return a.second < b.second;
    }
    
int scheduleCourse(vector<vector<int>>& courses) {
    int n = courses.size();
    if(n == 1) return 1;
    
    vector<pair<int, int>> c;
    for(int i = 0; i < n; i++){
        c.push_back({courses[i][0], courses[i][1]});
    }
    
    sort(c.begin(), c.end(), cmp);
    priority_queue<int> pq;
    int now = 0;
    int num = 0;
    for(int i = 0; i < n; i++){
        cout << courses[i][1] << endl;
        if(now + courses[i][0] <= courses[i][1]){
            num++;
            now += courses[i][0]; 
            pq.push(courses[i][0]);
        }else if(!pq.empty() && pq.top() >= courses[i][0] && now - pq.top() + courses[i][0] <= courses[i][1]){
            now -= pq.top();
            now += courses[i][0]; 
            pq.push(courses[i][0]);
        }
    }
    return num;
}

    
int main(){
    vector<vector<int>> courses;
    courses = {{2, 5}, {2, 19}, {1, 8}, {1, 3}};

    int result = scheduleCourse(courses);
    printf("%d", result);
    return 0;
}