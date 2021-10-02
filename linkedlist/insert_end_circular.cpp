//now this method is similar and extension and as smart as insertion at beginning of circular list

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
Node* insert(Node *head){      
    Node *temp2 = head->next;
    head->next = new Node(500);
    head->next->next = temp2;
    swap(head->data,head->next->data);
    head = head->next;                   // this line is the only diff from
                                            //INSERTION AT BEGINNING
    return head;
}

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






// also for more questions like deleting the head node :
// we can copy the data of second node in  the first node and then delete the second node - boom "head node" deleted