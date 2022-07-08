#include <iostream>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
Node* start = NULL;
Node* top = NULL;
 
bool isEmpty()
{
    if (start == NULL)
        return true;
    return false;
}
 
void push(int d)
{
    struct Node* n;
    n = new Node();
    n->data = d;
    if (isEmpty()) {
        n->prev = NULL;
        n->next = NULL;
 
        start = n;
        top = n;
    }
    else {
        top->next = n;
        n->next = NULL;
        n->prev = top;
        top = n;
    }
}
 
void pop()
{
    struct Node* n;
    n = top;
    if (isEmpty())
        printf("Stack is empty");
    else if (top == start) {
        top = NULL;
        start = NULL;
        free(n);
    }
    else {
        top->prev->next = NULL;
        top = n->prev;
        free(n);
    }
}
 
void topelement()
{
    if (isEmpty())
        printf("Stack is empty");
    else
        printf(
            "The element at top of the stack is : %d   \n",
            top->data);
}
 
void stacksize()
{
    int c = 0;
    if (isEmpty())
        printf("Stack is empty");
    else {
        struct Node* ptr = start;
        while (ptr != NULL) {
            c++;
            ptr = ptr->next;
        }
    }
    printf("Size of the stack is : %d \n ", c);
}
 
void printstack()
{
    if (isEmpty())
        printf("Stack is empty");
    else {
        struct Node* ptr = start;
        printf("Stack is :  ");
        while (ptr != NULL) {
            printf("%d   ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
