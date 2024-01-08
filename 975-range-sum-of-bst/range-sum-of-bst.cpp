/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void preOrder(TreeNode* root,int l,int h,int &sum){
        if(root==nullptr)
            return;
        preOrder(root->left,l,h,sum);
        if(root->val>=l && root->val<=h)
            sum+=root->val;
        preOrder(root->right,l,h,sum);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        preOrder(root,low,high,sum);
        return sum;
    }
};