//Heap is complete binary tree with heap properties i.e minHeap and maxHeap
#include <iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;
    Heap(){
        arr[0]=INT16_MIN;
        size=0;
    }
    void insert(int val){
        size++;
        int index=size; // index=> where to insert i.e last
        arr[index]=val; // inserted at last of array
        //Moving to right position
        while(index>1){
            int parent = index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
            }
            else{
                return;
            }
        }
    }
    void Delete(){
        if(size==0){
            cout<<"Nothing to delete!"<<endl;
            return;
        }
        else{

            //last index to first or root
            arr[1]=arr[size];
            // remove the last element
            size--;
            // moving root element to its right position..
            int i =1;
            while(i<=size){
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;
                if(arr[i]<arr[leftIndex] && leftIndex <size){
                    swap(arr[i],arr[leftIndex]);
                    i = leftIndex;
                }
                else if( rightIndex<size && arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i = rightIndex;
                }
                else {
                    return;
                }

            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout<<"Printing Heap"<<endl;
    h.print();
    h.Delete();
    cout<<"Printing Heap"<<endl;
    h.print();


    return 0;
}