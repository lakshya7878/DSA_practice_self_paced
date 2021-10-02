#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printlist(Node *head){
    Node *temp = head;
    while(temp!=NULL){
    cout<<temp->data;
    temp = temp->next;
    }
    
}
int main(){
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);
    printlist(head);
}