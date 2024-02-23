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
Node *ArrayToLinkedList(vector<int> v)
{
    Node *head = new Node(v[0]);
    Node *temp = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *x = new Node(v[i]);
        temp->next = x;
        temp = temp->next; // temp=x;
    }
    temp->next = NULL;
    return head;
}
void Print(Node *head)
{   
    // Node *temp = head;
    // cout << "Method 1" << endl;
    // Method 1
    // while (temp->next != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << temp->data;
    // cout << endl;
    cout << "Method 2" << endl;
    // Method 2
    Node * temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl;
}

Node *DeleteHead(Node* head){
    if(head==NULL) return head;
    Node*temp=head;
    head = head->next;
    delete temp;
    return head;
}

Node* DeleteEnd(Node* head){
    if(head==NULL || head->next==NULL) {
        delete head;
        return NULL;
    }
    Node* tempNext=head;
    Node*prev=NULL;
    while(tempNext->next != nullptr){
        prev=tempNext;
        tempNext=tempNext->next;
    }
    prev->next = NULL;
    delete tempNext;
    return head;
}

Node * DeleteAnyPostion(Node* head, int k){
    if(head==NULL){
        return NULL;
    }else if(k==1){
        Node*temp=head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp){
        cnt++;
        if(cnt==k){
            prev->next=temp->next; // prev->next=prev->next->next;
            free(temp);
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    cout<<"Out of range: "<<cnt<<endl;
    return head;
}

Node* DeleteByValue(Node* head,int k){

}



Node* InsertAtHead(Node*head, int ele){
    Node*temp=new Node(ele);
    if(head==NULL){
        head=temp;
        return head;
    }
    temp->next=head;
    head=temp;
    // free(temp);
    return head;
}

Node* InsertAtEnd(Node*head,int ele){
    if(head==NULL){
        Node*temp=new Node(ele);
        return temp; // head=temp, return head;
    }
    Node*tempNext=head;
    Node*prev=NULL;
    while(tempNext->next!=NULL){
        // prev=tempNext;
        tempNext=tempNext->next;
    }
    Node*x = new Node(ele);
    // prev->next=x;
    tempNext->next=x;
    // prev->next=NULL;
    return head;

}

Node * InsertAtAnyPostion(Node* head,int ele, int k){
    if(head==NULL){
        if(k==1){
            Node*x=new Node(ele);
            head=x;
            return head;
        }else{
            return head;
        }
    }
    if(k==1){
        Node*x=new Node(ele);
            x->next=head;
            head=x;
            return head;
    }
    Node*temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        if(cnt==(k-1)){
            Node*x=new Node(ele);
            x->next=temp->next;
            temp->next=x;
            return head;
        }
        temp=temp->next;
    }
    cout<<"out of range"<<cnt<<endl;
    return head;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // Node *x= new Node(10);
    // cout<<x->data;

    Node *head = ArrayToLinkedList(v);
    Node *temp = head;
    Print(temp);

    // cout<<"Delete Head"<<endl;
    // Node* newNode = DeleteHead(head);
    // Print(newNode);

    // cout<<"Delete End"<<endl;
    // Node* newNode2=DeleteEnd(head);
    // Print(newNode2);

    // cout<<"Delete At Any Position"<<endl;
    // cout<<"Enter Postion"<<endl;
    // int k;
    // cin>>k;
    // Node* newNode3=DeleteAnyPostion(head,k);
    // Print(newNode3);

    // cout<<"Insert At  Start"<<endl;
    // cout<<"Enter value"<<endl;
    // int k;
    // cin>>k;
    // Node* newNode4=InsertAtHead(head,k);
    // Print(newNode4);

    // cout<<"Insert At End"<<endl;
    // cout<<"Enter value"<<endl;
    // int k;
    // cin>>k;
    // Node* newNode4=InsertAtEnd(head,k);
    // Print(newNode4);


    cout<<"Insert At AnyPost"<<endl;
    cout<<"Enter value"<<endl;
    int ele;
    cin>>ele;
    cout<<"Enter Pos"<<endl;
    int k;
    cin>>k;
    Node* newNode5=InsertAtAnyPostion(head,ele,k);
    Print(newNode5);
    return 0;
}