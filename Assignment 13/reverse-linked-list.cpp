class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(!head or !head->next)
            return head;
        
        ListNode* curr= head;
        ListNode* ptr = head;
        head = head->next;
        curr->next = NULL;
        while(head)
        {
            curr = head;
            head = head->next;
            curr->next = ptr;
            ptr = curr;
        }
        return curr;
    }
};
