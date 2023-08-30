class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL)
            return NULL;
        vector<int> v;
        while (head != NULL) {
            int x = head->val;
            v.push_back(x);
            head = head->next;
        }
        sort(v.begin(), v.end());
        ListNode* x = new ListNode();
        ListNode* temp = x;
        for (auto tem : v) {
            temp->next = new ListNode(tem);
            temp = temp->next;
        }
        return x->next;
    }
};