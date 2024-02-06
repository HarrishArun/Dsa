class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr; 
        }
        
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *nextptr = head->next;
        
        while (curr) {
            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }
        
        return prev;
    }
};
