#include<iostream>
using namespace std;
# define max 100
struct stack{
    int arr[max];
    int top;

    stack(){
        top = -1;
    }

bool isEmpty(){
    return (top == -1);
}

bool isFull(){
    return (top == max -1);
}

void push(int value){
    if(isFull()){
        cout<<"the stack is full "<<endl;
    }else{
        arr[++top] = value;
    }
}

void pop(){
    if(isEmpty()){
        cout<<"the stack is empty"<<endl;
    }else{
       cout<<"popped :"<< arr[top--]<<endl;
    }
}

int peek(){
    if(isEmpty()){
        cout<<"the stack is empty"<<endl;
        return -1;
    }else{
        return arr[top];
    } 
}

};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while(!s.isEmpty()){
        cout<<" "<<s.peek()<<endl;
        s.pop();
    }

    return 0;
}