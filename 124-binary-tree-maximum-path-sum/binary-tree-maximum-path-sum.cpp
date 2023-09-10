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
    private:
    int height(TreeNode *root,int & pathSum)
    {
        if(root==NULL)
            return 0;
        int x=max(0,height(root->left,pathSum));//not considering -ve path and replacing with 0
        int y=max(0,height(root->right,pathSum));
        pathSum=max(pathSum,x+y+root->val);
        return root->val+max(x,y);
    }
public:
    int maxPathSum(TreeNode* root) {
        int pathSum=INT_MIN;
        height(root,pathSum);
        return pathSum;
    }
};
/*class Solution {
private:
    int height(TreeNode *root,int & dia)
    {
        if(root==NULL)
            return 0;
        int x=height(root->left,dia);
        int y=height(root->right,dia);
        dia=max(dia,x+y);
        return 1+max(x,y);
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    
};*/