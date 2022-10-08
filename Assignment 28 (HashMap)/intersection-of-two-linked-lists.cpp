/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA) return headB;
        if (!headB) return headA;
        
        map<ListNode*,int> m1;
        ListNode *node = headA;
        while (node){
            m1[node] = 1;
            node = node->next;
        }
        node = headB;
        while (node){
            if (m1[node]){
                return node;
            }
            node = node->next;
        }
        return nullptr;
    }
};
