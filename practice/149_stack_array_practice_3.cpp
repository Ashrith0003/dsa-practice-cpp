#include<iostream>
using namespace std;
class stack{
    int arr[100];
    int top;
    int max_element;
public:
    stack(int size =100){
        top = -1;
         max_element = size;
    }

    bool isempty(){
        if(top == -1){
          return true;
        }else{
            return false;
        }
    }

    void push(int value){
        if(top == max_element-1){
            cout<<"the stack is full";
        }else{
            arr[++top] = value;
            cout<<"The pushed value"<<value;
        }
    }

    void pop(){
        if(isempty()){
            return;
        }else{
            cout<<arr[top--]<<"poped value";
        }
    }

    int peek(){
        if(isempty()){
            return;
        }else{
            cout<<arr[top]<<"top value";
        }
    }
};
