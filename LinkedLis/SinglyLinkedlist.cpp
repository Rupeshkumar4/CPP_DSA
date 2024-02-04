#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next =NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next !=NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"Node is deleted with data"<< value<<endl;

    }
};

void InsertAtHead(Node * &head, int data){
    Node * newNode = new Node(data);
    newNode->next = head;
    head=newNode;
}

void InsertAtTail(Node * &tail, int data){
    Node * temp=new Node(data);
    tail->next=temp;
    tail=temp; // tail=tail->next;
}

void DeleteAtHead(Node * &head){
    if(head==NULL){
        free(head);
    }else{
        Node * temp=head;
        head=temp->next; // head=head->next;
        temp->next=NULL; 
        // free(temp);
        delete temp;
    }
}

void DeleteAtTail(Node * &head){
    Node * temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

}

void DeleteAtAnyPos(int postion, Node * &head){
    if(postion==1){
        DeleteAtHead(head);
    }
    else if(postion==9){
        DeleteAtTail(head);
    }
    
    else{
        Node * curr=head;
        Node * prev=NULL;
        int cnt=0;

        while(cnt <postion){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void Print(Node * &head){
    Node * temp=head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int main(){
    Node * node1= new Node(10);
    // Node * node2= new Node(20);

    Node * head=node1;
    Node * tail=node1;

    // Print(head);

    // InsertAtHead(head, 20);

    // Print(head);

    // cout<<"========================"<<endl;

    // Print(head);

    InsertAtTail(tail, 30);

    // Print(head);

    DeleteAtHead(head);
    Print(head);

}