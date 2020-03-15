#include "bits/stdc++.h"
#define F           first
#define S           second
#define endl        "\n"
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(),x.end()
#define memset(a,b) memset(a,b,sizeof(a));
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        if(matrix[0].empty()) return false;
        int col = matrix[0].size() - 1;
        int row = 0;
        while(row < matrix.size() && col >= 0){
            if(matrix[row][col] < target) row++;
            else if(matrix[row][col] > target) col--;
            else return true;
        }
        return false;
    }

int main()
{
    vector<vector<int>> nums{{1,1}};
    int n = 2;
    
    bool result = searchMatrix(nums, n);
    cout << result << endl;

    return 0;
}