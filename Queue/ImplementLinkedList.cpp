#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Queue{
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }
    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->head==NULL){
            this->head = this->tail = newNode;
        }else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }

    void dequeue(){
        if(this->head==NULL){
            return;
        }
        else{
            Node* oldHead = this->head;
            Node* newHead = this->head->next;
            this->head=newHead;
            if(this->head==NULL) this->tail = NULL;
            oldHead->next=NULL;
            delete oldHead;
            this->size--;
        }
    }

    bool IsEmpty(){
        if(this->size==0) return true;
        else return false;
    }

    int getSize(){
        return this->size;
    }
    int getFront(){
        if(this->size==0) return -1;
        return this->head->data;
    }
};

int main(){
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    while(!qu.IsEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeue();
    }
    return 0;
}
