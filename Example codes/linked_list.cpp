#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node * next;
};

int main() {
	Node *head;
	head->val = 1;
	cout<<"val "<<head->val;
	
	Node *temp;
	temp->val=2;
	cout<<"val "<<temp->val;
	
	head->next = temp;
	return 0;
}
