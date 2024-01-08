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
      void inOrder(TreeNode* root,vector<int>& res){
        if(root==nullptr)
            return;
        inOrder(root->left,res);
        res.emplace_back(root->val);
        inOrder(root->right,res);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        inOrder(root,res);
        return res;

    }
};