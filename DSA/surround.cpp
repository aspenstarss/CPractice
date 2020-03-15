#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<char>>& board, int x, int y);
void solve(vector<vector<char>>& board) {
    int n = board.size();
    if(n < 3) return;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                if(board[i][j] == 'O')
                    DFS(board, i, j);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == '#'){
                board[i][j] = 'O';
            }else{
                board[i][j] = 'X';
            }
        }
    }
}

void DFS(vector<vector<char>>& board, int x, int y){
    int n = board.size();
    // if(x == 0 || x == n - 1 || j == 0 || j == n - 1){
        board[x][y] = '#';
    // }
    
    int turn[4][4] = {{-1, 0, 1, 0},
                        {0, -1, 0, 1}};
    int newx, newy;
    for(int i = 0; i < 4; i++){
        newx = x + turn[0][i];
        newy = y + turn[1][i];
        if(newx >= 0 && newx < n && newy >= 0 && newy < n && board[newx][newy] == 'O'){
            DFS(board, newx, newy);
        }
    }
}

int main(){
    vector<vector<char>> board;
    int n1, n2;
    char t; 
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(int i = 0; i < n1; i++){
        vector<char> nums;
        for(int j = 0; j < n2; j++){  
            scanf(" %c", &t);
            nums.push_back(t);
        }
        board.push_back(nums);
    }

    solve(board);
    // printf("%d", result);
    return 0;
}