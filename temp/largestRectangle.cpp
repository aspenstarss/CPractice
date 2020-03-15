#include "bits/stdc++.h"

using namespace std;

    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        heights.insert(heights.begin(), 0);
        heights.push_back(0);
        stack<int> ascend;
        int res = 0;
        for(int i = 0; i < heights.size(); i++){
            int tmp = heights[i];
            while(!ascend.empty() && heights[i] < heights[ascend.top()]){
                int height = heights[ascend.top()];
                ascend.pop();
                res = max(res, height * (i - ascend.top() - 1));
            }
            ascend.push(i);
        }
        return res;
    }

int main()
{

    vector<int> a = {2, 1, 5, 6, 2, 3};
    int r = largestRectangleArea(a);
    cout << r << endl;
    
}