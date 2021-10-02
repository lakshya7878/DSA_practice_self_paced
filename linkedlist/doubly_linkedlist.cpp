#include<iostream>
using namespace  std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
        prev  = NULL;
    }
};
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next  = new Node(30);
    head->next->next->prev = head->next;
    print(head);

}