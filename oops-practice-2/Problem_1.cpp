#include<iostream>
using namespace std;
class smartarray{
    int*arr;
    int size;
    int capacity;

    void resize(){
        capacity =*2;
        int*newarr = new int[capacity];
        for(int i=0;i<size;i++){
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
    }
public:
    smartarray(){
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    void insert(int value){
        if(capacity == size){
            resize();
        }
        arr[size++] = value;
    }

    void remove(int index){
        if(index < 0 || index => size){
            cout<<"invaild index";
            return;
        }

        for(int i = index;i<size-1;i++){
            arr[i]= arr[i+1];
        }
        size--;
    }

    int find(int value){
        for(int i =0;i<size;i++){
            if(arr[i]== value){
                return i;
            }
            return -1;
        }
    }

    void display(){
        for(int i =0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~smartarray(){
        delete[] arr;
    }
}