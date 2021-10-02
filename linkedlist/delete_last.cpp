#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next ;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node * deleteNode(Node *head){
    Node *temp = head;
    while((head->next->next)!=NULL){
        head = head->next;
    }
    delete head->next;
    head->next = NULL;
    return temp;

}
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
int main(){
      Node *head = new  Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = deleteNode(head);
    print(head);
}