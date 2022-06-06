SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

SinglyLinkedListNode * node = new SinglyLinkedListNode(data);
node->data=data;
node->next=NULL;
if(llist==NULL){
    llist=node;
}
else{
    node->next=llist;
    
    llist=node;
}
return llist;
}
