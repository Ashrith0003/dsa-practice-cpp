#include<iostream>
using namespace std;
struct stack{
    int arr[100];
    int top;
    int max;
public:
    stack(int size){
        max = size ;
        top =-1;
    }


void push(int value){
    if(top > max-1){
        cout<<"stack is full";
    }else{
        arr[++top] = value;
    }
}

void pop(){
    if(top < 0){
        cout<<"stack is empty";
    }else{
        top--;
    }
}

void peek(){
    if(top < 0){
        cout<<"stack is empty";
    }else{
        cout<<arr[top];
    }
}

void display(){
    for(int i=0;i<top;i++){
        cout<<arr[i]<<" ";
    }
}

};
