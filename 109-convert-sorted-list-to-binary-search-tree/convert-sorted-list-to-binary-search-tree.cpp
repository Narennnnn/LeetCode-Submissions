/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* buildBst(vector<int>& nums, int left, int right) {
        if (left > right) {
            return NULL;
        }
        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildBst(nums, left, mid - 1);
        root->right = buildBst(nums, mid + 1, right);
        return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>nums;
        while(head!=NULL)
        {
            nums.emplace_back(head->val);
            head=head->next;
        }
        if (nums.empty()) {
            return NULL;
        }
        return buildBst(nums, 0, nums.size() - 1);
    }
};


    
