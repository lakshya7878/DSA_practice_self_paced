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
Node* insert(Node *head){       // I call this method cheating lol 
    Node *temp2 = head->next;
    head->next = new Node(500);
    head->next->next = temp2;
    swap(head->data,head->next->data);
    return head;
}

// but it gets the  job done : we are  making a new node in between the  first and the second original node . then we are swapping the values of the first node and the second node(new) hence we have our data saved in the first node now  and we can say that we have "Inserted the node at the beginning"

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
    head = insert(head);
    print(head);
}



