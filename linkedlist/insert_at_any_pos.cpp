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
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
Node * insert(Node *head, int pos,int value){
    if(pos == 1){
         Node *temp = new Node(value);
    temp->next=head ;
    return temp;

    }
    else{
    Node *temp = head;
    pos = pos- 2;
    while(pos--){                      // do note that the time complexity is O(n)
                                        //hence we can conclude that deletion and insertion at any position other than end/start is O(n)
        temp = temp->next;
    }
    Node *save = temp->next;
    temp->next = new Node(value);
    temp = temp->next;
    temp->next = save;
    return head;
    }
}
int main(){
       Node *head = new  Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insert(head,1,500);
    print(head);
}