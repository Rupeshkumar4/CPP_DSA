#include <iostream>
#include <vector>
using namespace std;

class Queue {
    int front;
    int back;
    vector<int> v;

public:
    Queue() {
        this->front = -1;
        this->back = -1;
    }

    void enqueue(int data) {
        this->v.push_back(data);
        this->back++;
        if (this->back == 0)
            this->front++;
    }

    void dequeue() {
        if (this->front == this->back) {
            this->back = -1;
            this->front = -1;
        } else {
            this->v.erase(this->v.begin()); // Remove the front element from the vector
            this->front++;
        }
    }

    int getFront() {
        if (this->front == -1)
            return -1;
        else
            return v[this->front];
    }

    bool isEmpty() {
        if (this->front == this->back)
            return true;
        else
            return false;
    }
};

int main() {
    Queue qu;
    qu.enqueue(1);
    qu.enqueue(5);
    qu.enqueue(5);
    qu.enqueue(5);
    qu.enqueue(5);
    qu.enqueue(3);

    cout << "Queue" << endl;

    while (!qu.isEmpty()) {
        cout << qu.getFront() << " ";
        qu.dequeue();
    }

    return 0;
}
