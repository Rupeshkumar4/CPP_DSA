#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node *next;

    Node(int data){
        this->data = data;
        prev=NULL;
        next=NULL;
    }
};

void Print(Node * &head){
    Node * temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node * &head){
    Node * temp=head;
    int cnt=0;
    while(temp !=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void InsertAtHead(Node * &head, int data){
    Node *temp=new Node(data);
    // temp->next=head->prev;
    // head->prev=temp->next;
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAtTail(Node * &tail, int data){
    Node * temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

int main(){
    Node* n1 = new Node(10);
    Node *head=n1;
    Node *tail=n1;
    Print(head);
    InsertAtHead(head,15);
    InsertAtTail(tail,16);
    Print(head);
    cout<<getLength(head);
    return 0;

}