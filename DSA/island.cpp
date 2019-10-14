#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int cx[4] = {1, 0, -1, 0};
const int cy[4] = {0, 1, 0, -1};

int DFS(vector<vector<char>>& grid, int x, int y){
    // if(grid[x][y] == '0')
    //     return 0;
    grid[x][y] = '0';
    int nums = 0;
    for(int i = 0; i < 4; i++){
        int newx = x + cx[i];
        int newy = y + cy[i];
        if(newx >= 0 && newx < grid.size() && newy >= 0 && newy < grid[0].size() \
            && grid[newx][newy] == '1')
            nums += DFS(grid, newx, newy);
            // grid[newx][newy] = '0';
    }
    return nums;
}

int numIslands(vector<vector<char>>& grid) {
    int len_x = grid.size();
    if(!len_x) return 0;
    int len_y = grid[0].size();
    // int vis[len_x][500] = {0};
    int nums = 0;
    for(int i = 0; i < len_x; i++){
        for(int j = 0; j < len_y; j++){
            if(grid[i][j] == '1'){
                DFS(grid, i, j);
                nums++;
            }
        }
    }
    return nums;
}
    
int main(){
    int n, m;
    int t;
    scanf("%d", &n);
    scanf("%d", &m);
    vector<vector<int>> grid;
    for(int i = 0; i < n; i++){
        vector<int> tmp;
        for(int j = 0; j < m; j++){
            scanf("%d", &t);
            tmp.push_back(t);
        }
        grid.push_back(tmp);
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         printf("%d ", grid[i][j]);
    //     }
    // }
    int result = numIslands(grid);
    printf("%d", result);
    return 0;
}