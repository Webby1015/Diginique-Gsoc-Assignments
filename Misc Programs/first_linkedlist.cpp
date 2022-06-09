#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * link;
};

void printList(Node * ap){
    while(ap != NULL){
    cout<<ap->data<<endl;
    ap=ap->link;
    }
}


int main(){
    Node * a = new Node();
    Node * b = new Node();  
    Node * c = new Node();
    
    a->data = 1;
    a->link = b;
    b->data = 2;
    b->link = c;
    c->data = 3;
    c->link = NULL;
    
    printList(a);
}
