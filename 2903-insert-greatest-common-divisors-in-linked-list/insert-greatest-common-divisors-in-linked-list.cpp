class Solution {
private:
    int calGcf(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        
        ListNode* tempHead = head;
        ListNode* newHead = new ListNode();  
        ListNode* newTail = newHead;
        
        while (tempHead != nullptr && tempHead->next != nullptr) {
            int midNum = calGcf(tempHead->val, tempHead->next->val);

            newTail->next = new ListNode(tempHead->val);
            newTail = newTail->next;
            
            newTail->next = new ListNode(midNum);
            newTail = newTail->next;

            tempHead = tempHead->next;
        }
        
        if (tempHead != nullptr) {
            newTail->next = new ListNode(tempHead->val);
        }

        return newHead->next; // Skip the first dummy node
    }
};
