#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};
Node * insert(int d, Node *head){          // inserting node at  the beginning 
    Node *temp = new Node(d);
    temp->next=head ;
    return temp;


}
void print(Node *head ){                    // Printing the node
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head  = insert(999,head);               //setting main's head to the new temp
    print(head);
}