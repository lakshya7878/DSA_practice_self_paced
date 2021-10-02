#include<iostream>
using namespace  std;          //////reversing a doubly linked list
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
        temp=temp->prev;        //changed next to prev... smart little trick
    }
}

Node* reverse(Node* head){
    while(head->next!=NULL){
        head = head->next;
    }
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next  = new Node(30);
    head->next->next->prev = head->next;
    head = reverse(head);
    print(head);

}
//basically finding the last node and making it our first node and using prev instead of next