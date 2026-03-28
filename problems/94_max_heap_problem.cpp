#include<iostream>
using namespace std;
class maxheap{
    int arr[100];
    int size;
public:
    maxheap(){
        size = 0;
    }

void insert(int value){
    arr[size] = value;
    heapfiyup(size);
    size++;
}

void swap(int &a,int &b){
    int c = a;
    a = b;
    b = c;
}

void heapfiyup(int index){
    while(index>0){
        int parent = (index-1)/2;
        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }else{
            break;
        }
    }
};

void display(){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};


int main(){
    maxheap h;
h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(35);
    h.insert(25);
    h.insert(70);
    cout << "Max Heap Elements: ";
    h.display();
    return 0;
}