class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr){
            return head;
        }
        
        ListNode dummy(0);
        dummy.next = head;
        
        ListNode* last = &dummy;
        ListNode* prev = last;
        ListNode* curr = head;
        
        while(curr){
            int currVal = curr->val;
            
            if(currVal < x){
                if(last->next == curr){ // adjacent
                    last = curr;
                    prev = curr;
                    curr = curr->next;
                }else{
                    // insert current small node
                    ListNode* temp = curr;
                    prev->next = curr->next;
                    temp->next = last->next;
                    last->next = temp;
                    
                    last = last->next;
                    curr = prev->next;
                }
            }else{
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy.next;
    }
};
