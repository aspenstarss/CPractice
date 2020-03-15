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

class Solution {
public:
    unordered_map<int, int> index;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i < inorder.size(); i++){
            index[inorder[i]] = i;
        }
        return helper(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }

    TreeNode* helper(vector<int>& inorder, vector<int> &postorder, int inleft, int inright, int postleft, int postright){
        if(inleft > inright) return NULL;
        int incur = index[postorder[postright]];
        int postleftcur = postright - (inright - incur);
        TreeNode* root = new TreeNode(postorder[postright]);
        root->left = helper(inorder, postorder, inleft, incur - 1, postleft, postleftcur - 1);
        root->right = helper(inorder, postorder, incur + 1, inright, postleftcur, postright - 1);
        return root;
    }
};

int main()
{
    vector<int> inorder = {9,3,15,20,7};
    vector<int> postorder = {9,15,7,20,3};
    Solution a;
    TreeNode* root = a.buildTree(inorder, postorder);
    // cout << result << endl;

    return 0;
}