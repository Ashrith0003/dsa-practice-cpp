#include<iostream>
#include<stack>
using namespace std;
class stack{
    int arr[100];
    int top;
public:
    stack(int size){
        int arr[100];
        top =-1;
        int max_element = size;
    }

void push(int value){
    if(top => max_element-1){
        cout<<"the stack is full";
    }else{
        arr[++top]= value;
        cout<<value<<"pushed";
    }
}

void pop(){
    if(top < 0){
        cout<<"the stack is empty";
    }else{
        cout<<arr[--top]<<"poped";
    }
}

bool isempty(){
    return (top < 0);
}
int peek (){
    cout <<arr[top];
}

}
