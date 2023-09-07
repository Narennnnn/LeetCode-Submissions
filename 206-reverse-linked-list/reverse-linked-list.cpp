class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = nullptr;
        ListNode* nextNode = head;

        while (nextNode != nullptr) {
            current = nextNode;
            nextNode = nextNode->next;
            current->next = prev;
            prev = current;
        }

        return prev; // 'prev' now points to the new head
    }
};
