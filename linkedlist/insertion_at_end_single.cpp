#include<iostream>
using namespace std;
class  Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next  = NULL;
    }
};
Node* insertend(int d , Node *head){
    if(head  ==NULL){
        head = new Node(d);
        return  head;
    }
    Node *temp = head;
    while(temp !=NULL){
        temp =  temp->next;
    }
    temp->next = new Node(d);
    return head;
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
    Node *head = NULL;
    head = insertend(100,head );
    print(head);


}