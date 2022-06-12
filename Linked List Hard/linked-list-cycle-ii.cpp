class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL) {
            return NULL;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* temp = head;
        
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow) {
               
                while (slow != temp) {
                    slow = slow->next;
                    temp = temp->next;
                }
                return temp;
            }
        }
        return NULL;
    }
};
