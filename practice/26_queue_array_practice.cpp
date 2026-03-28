#include<iostream>
using namespace std;
struct queue{
    int* arr;
    int front;
    int rare;
    int max;
    queue(int size){
        front = -1;
        rare = -1;
        max = size;
        arr = new int[size];
    }

    void enqueu(int val){
        if(rare == max-1){
            cout<<"queue is full"; 
        }else {
            if(rare == -1){
                rare = front =0;
            }else{
                arr[rare++] = value;
            }
            
        }
    }

    void dequeue(){
        if(front == -1 || front>rare ){
            cout<<"the queue is empty";
        }else{
              front++;
              if(front >rare){
                front = rare = -1;
              }
        }
    }

    void display(){
        if(front ==-1 || front > rare){
            cout<<"queu is empty";
        }
        for(int i=front;i<rare;i++){
            cout<<arr[i]<<" ";
        }
    }

};
