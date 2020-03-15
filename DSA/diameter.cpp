#include <bits/stdc++.h> 
using namespace std; 

/* Tree node structure used in the program */
struct TreeNode { 
    int data; 
    TreeNode* left, *right; 
}; 
int height(TreeNode* root, int& ans);
int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = INT_MIN;
        int height_of_tree = height(root, ans);
        return ans;
    }

int height(TreeNode* root, int& ans){
    if(root == NULL){
        return 0;
    }
    
    int left_height = height(root->left, ans);
    int right_height = height(root->right, ans);

    ans = max(ans, left_height + right_height + 1);

    return 1 + max(left_height, right_height);
}

struct TreeNode* newNode(int data) 
{ 
    struct TreeNode* node = new TreeNode; 
    node->data = data; 
    node->left = node->right = NULL; 
  
    return (node); 
} 
  
// Driver code 
int main() 
{ 
    struct TreeNode* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
  
    printf("Diameter is %d\n", diameterOfBinaryTree(root)); 
  
    return 0; 
} 