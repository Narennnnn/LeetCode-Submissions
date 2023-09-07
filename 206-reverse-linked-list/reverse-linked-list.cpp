class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> list;
        
        while (head != nullptr) {
            list.push_back(head->val);
            head = head->next;
        }
        
        ListNode* newHead = nullptr;
        ListNode* current = nullptr;
        
        for (int i = list.size() - 1; i >= 0; i--) {
            ListNode* newNode = new ListNode(list[i]);
            
            if (newHead == nullptr) {
                newHead = newNode;
                current = newNode;
            } else {
                current->next = newNode;
                current = current->next;
            }
        }
        
        return newHead;
    }
};
