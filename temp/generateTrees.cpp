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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n) return backtrace(1, n);
        else return {};
    }

    vector<TreeNode*> backtrace(int start, int end){
        vector<TreeNode*> res;        
        if(start > end){
            res.push_back(NULL);
            return res;
        }
        for(int i = start; i <= end; i++){
            vector<TreeNode*> leftNode = backtrace(start, i-1);
            vector<TreeNode*> rightNode = backtrace(i+1, end);
            for(auto l : leftNode){
                for(auto r : rightNode){
                    TreeNode* t = new TreeNode(i);
                    t->left = l;
                    t->right = r;
                    res.push_back(t);
                }
            }
        }
        return res;
    }

    TreeNode* getNewTree(TreeNode* cur){
        TreeNode* r = new TreeNode(cur->val);
        if(r->left)
            r->left = getNewTree(cur->left);
        if(r->right)
            r->right = getNewTree(cur->right);
        return r;       
    }
};

int main()
{
    int n = 3;
    // Solution a;
    // a.generateTrees(n);
    int i = 3;
    int k = (i++)
            +(i++)
            +(i++);
    cout << k << " " << i;

    return 0;
}