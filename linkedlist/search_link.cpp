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
void search(Node *head,int elem){
    Node *temp = head;
    int pos = 0;
    int flag = 1;
    while(temp!=NULL){
        pos++;
        if(temp->data == elem){
            cout<<pos<<endl;
            flag = 0;
            break;
        }
        temp = temp->next;

    }
    if(flag){
        cout<<"not found"<<endl;
    }
    
}


int main(){
       Node *head = new  Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
     search(head,200);
    
}