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

    int res = INT_MIN;

    int helper(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int cur = root->val;
        int l, r;
        l = max(helper(root->left), 0);
        r = max(helper(root->right), 0);

        int curval;
        curval = cur + l + r;
        res = max(res, curval);
        return cur + max(l, r);
    }

    int maxPathSum(TreeNode* root) {
        if(root == NULL) return INT_MIN;
        return max(res, helper(root));
    }

int main()
{
    TreeNode* root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(1);
    int result = maxPathSum(root);
    cout << result << endl;

    return 0;
}