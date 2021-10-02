#include<iostream>
#include "node.cpp"
node* input(){
	
}
using namespace std;
void print(node *head){
	node *temp  = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int main(){
	node *n1 = new node(1);  // this is dma you can also make static node objects like node n1(1)
	node *head = n1;
	node *n2 = new node(2);
	n1->next = n2;
	node *n3 = new node(3);
	n2->next = n3;
	print(head);
}