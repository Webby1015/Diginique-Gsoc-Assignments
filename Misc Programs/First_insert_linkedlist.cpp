#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * link;
};

Node * head = new Node;
 
void printList(Node * p){
    while(p != NULL){
        cout<<p->data<<endl;
        p=p->link;
    }
}
void insert(Node * i){
    Node * a = new Node;
    cout<<"Insert element :"<<endl;
    cin>>a->data;
    a->link=i;
    head->link=a;
    printList(a);
}



int main(){
    Node * a = new Node;
    Node * b = new Node;
    Node * c = new Node;
    
    head->link=a;
    a->data = 1;
    a->link = b;
    b->data = 2;
    b->link = c;
    c->data = 3;
    c->link = NULL;
    insert(a);
    
}
