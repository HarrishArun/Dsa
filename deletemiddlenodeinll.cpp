class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
         
            return nullptr;
        }

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

      

        if (prev) {
            prev->next = slow->next;
            delete slow;
        } else {
            
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        return head;
    }
};
