#include<iostream>
using namespace std;
class queue{
    int arr[100];
    int front;
    int rare;

    queue(int size =100){
        front=-1;
        rare =-1;
    }

    bool isempty(){
        if(front ==-1||front >rare){
            return true ;
        }else{
            return false;
        }
    }

    bool isfull(){
        if(rare == size-1){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int value){
        if(isfull()){
            return;
        }else{
            if(front == -1){
                front = 0;
            }
            arr[++rare] = value;
            cout<<"the pushed value "<<value;
        }
    }

    void dequeue(){
        if(isempty){
            return;
        }else{
            front++;
            cout<<arr[front]<<"is poped";
        }
    }
}
