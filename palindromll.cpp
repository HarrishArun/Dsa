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
class Solution {
public:
    bool isPalindrome(ListNode* head) {

    if (!head || !head->next) // Handle empty list or single-node list
            return true;
         ListNode *slow=head;
        ListNode *fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;



           
        }  

         ListNode *prev = nullptr;
        ListNode *curr = slow;
        ListNode *nextptr = slow->next;
        
        while (curr) {
            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }

        
     ListNode *first=head;
     ListNode *second=prev;

    while(second){
        if(first->val!=second->val) return false;
        first=first->next;
        second=second->next;
    }
    return true;
    }  
    
};



