#include <bits/stdc++.h> 
using namespace std; 

/* Tree node structure used in the program */
struct TreeNode { 
    int data; 
    TreeNode* left, *right; 
}; 

int func(TreeNode* root);

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
  
    printf("%d\n", func(root)); 
  
    return 0; 
} 