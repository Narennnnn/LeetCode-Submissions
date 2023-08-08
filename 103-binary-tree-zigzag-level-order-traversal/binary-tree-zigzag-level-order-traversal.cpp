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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode *>q;
        if(root==NULL)
            return res;
        bool pos=true;
        q.push(root);
        while(!q.empty())
        {
        int size=q.size();
            vector<int>level(size);
        pos=!pos;
        for(int i=0;i<size;i++)
        {
            TreeNode *node=q.front();
            q.pop();
            int index=pos?i:(size-1-i);
            level[index]=node->val;
            if(node->right)
                q.push(node->right);
            if(node->left)
                q.push(node->left);
        }
            res.push_back(level);
        }
        return res;
    }
};