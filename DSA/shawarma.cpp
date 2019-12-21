#include <bits/stdc++.h>
using namespace std;

static const bool cmpx(vector<int> &a, vector<int> &b){
    return a[0] < b[0];
}

static const bool cmpy(vector<int> &a, vector<int> &b){
    return a[1] < b[1];
}

void shawarma(int sx, int sy, vector<vector<int>> stu){
    int minx, miny, maxx, maxy;
    minx = (sx > 0) ? sx - 1 : 0;
    miny = (sy > 0) ? sy - 1 : 0;
    maxx = sx + 1;
    maxy = sy + 1;

    int nminx = 0, nminy = 0, nmaxx = 0, nmaxy = 0;

    sort(stu.begin(), stu.end(), cmpx);
    for(int i = 0; i < stu.size(); i++){
        if(stu[i][0] <= minx) nminx++;
        if(stu[i][0] >= maxx) nmaxx++;
    }

    sort(stu.begin(), stu.end(), cmpy);
    for(int i = 0; i < stu.size(); i++){
        if(stu[i][1] <= miny) nminy++;
        if(stu[i][1] >= maxy) nmaxy++;
    }
    int maxall = max(max(nminx, nminy), max(nmaxx, nmaxy));
    cout << maxall << endl;
    if(maxall == nminx){
        cout << minx << " " << sy << endl;
    }else if(maxall == nminy){
        cout << sx << " " << miny << endl;
    }else if(maxall == nmaxx){
        cout << maxx << " " << sy << endl;
    }else{
        cout << sx << " " << maxy << endl;
    }
}

int main(){
    vector<vector<int>> nums;
    int n, tx, ty, sx, sy;
    scanf("%d %d %d", &n, &sx, &sy);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &tx, &ty);
        vector<int> t;
        t.push_back(tx);
        t.push_back(ty);
        nums.push_back(t);
    }

    shawarma(sx, sy, nums);
    return 0;
}