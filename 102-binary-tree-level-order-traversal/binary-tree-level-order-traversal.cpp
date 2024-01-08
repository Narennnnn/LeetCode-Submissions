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
    void levelOrderTraverse(TreeNode * root, vector<vector<int>>& resArr){
        if(root==nullptr)
         return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
            TreeNode* curr=q.front();
            temp.push_back(curr->val);
            if(curr->left!=nullptr)
             q.push(curr->left);
            if(curr->right!=nullptr)
             q.push(curr->right);
            q.pop();
            }
            resArr.push_back(temp);
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        levelOrderTraverse(root,res);
        return res;
    }
};