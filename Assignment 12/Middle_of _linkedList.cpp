class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode *firstnode =  head;
        ListNode *secondnode =  head;
        
        while(secondnode != NULL){
            if(secondnode->next!=NULL){

                firstnode=firstnode->next;
                secondnode = secondnode->next->next;
            }else{
                break;
            }
        }
        return firstnode;
    }
};
