


void printLinkedList(SinglyLinkedListNode* head) {
    if(head==NULL){
        return ;
    }
    else{
        SinglyLinkedListNode*p;
        p=head;
        while(p!=NULL){
            cout<<p->data<<"\n";
            p=p->next;
        }
    }


}

