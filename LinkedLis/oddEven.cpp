#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node* ArrayToList(vector<int>evn,vector<int>odd){
    Node*head=new Node(odd[0]);
    Node*temp=head;
    for(int i=1;i<odd.size();i++){
        Node*x=new Node(odd[i]);
        temp->next=x;
        temp=x;
        // temp = temp->next;
    }
    for(int i=0;i<evn.size();i++){
        Node*x=new Node(evn[i]);
        temp->next=x;
        temp=x;
        // temp = temp->next;
    }
    return head;
}

Node* oddEvenList(Node* head)
{
	// Write your code here.
    vector<int>evn;
    vector<int>odd;
    int cnt=1;
    if(head==NULL || head->next==NULL) return head;
    
    Node*temp=head;
    while(temp){
        if(cnt%2==1)odd.push_back(temp->data);
        else evn.push_back(temp->data);
        cnt++;
        temp=temp->next;
        
    }
    Node* newHead=ArrayToList(evn,odd);
    return newHead;
}


int main() {
	// your code goes here
	Node* head=new Node(2);
	head->next=new Node(4);
	head->next->next=new Node(6);
	head->next->next->next=new Node(8);
    head->next->next->next->next=new Node(10);
    head->next->next->next->next->next=new Node(20);
    head->next->next->next->next->next->next=new Node(50);
    
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    head=oddEvenList(head);
    
    cout<<endl;
    
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
	return 0;
}