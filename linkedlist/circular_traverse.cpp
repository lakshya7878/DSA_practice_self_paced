#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next  = NULL;
    }
};

void  print(Node *head){
    Node *temp = head;
    
    do {
        cout<<temp->data<<endl;
        temp = temp->next;   
    } while(temp!=head);

    //this do while helps in printing node if there is only one node in the circular linked list
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    print(head);
}