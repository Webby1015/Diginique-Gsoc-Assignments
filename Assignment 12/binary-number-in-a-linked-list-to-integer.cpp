class Solution {
public:
    //function to convert the binary form of a number to decimal form
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp=head;
        int ans=0;
        while(temp!=NULL)
        {
            ans=(ans*2)+(temp->val);
            temp=temp->next;
        }
        return ans;
    }
};
