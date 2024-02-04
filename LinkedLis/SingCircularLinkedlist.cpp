#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
    Node(int data){
        this->data = data;
        this->next =NULL;
        this->prev =NULL;
    }
};

void Print(Node * &tail){
    if(tail==NULL){
        cout<<"No Data"<<endl;
    }else{
        Node *temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void InsertAtHead(Node * &head,Node * &tail, int data){
    Node *temp=new Node(data);
    head->next=temp;
    temp->next=head->prev;
    temp->prev=head->next;
    tail=temp;
}

void InsertNode(Node * &tail,int data, int ele){
    if(tail==NULL){
        Node *temp=new Node(data);
        temp->next=temp;
        tail=temp;
    }
}


int main(){
    Node *n1=new Node(10);
    Node *head=n1; // NO need 
    Node *tail=NULL;
    // InsertAtHead(head,tail,20);
    InsertNode(tail,10,20);
    Print(tail);
}