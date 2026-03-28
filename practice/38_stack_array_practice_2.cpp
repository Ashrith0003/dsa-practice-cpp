#include<iostream>
using namespace std;
class stack {
    int top;
    int arr[100];
    int max_element;
public:
stack(int size = 100){
    top=-1;
    max_element = size;
}

void push(int value){
    if(top >= max_element-1){
        cout<<"the stack is full"<<endl;
    }else{
        arr[++top]=value;
        cout<<arr[++top]<<"is pushed into stack"; 
    }

};

void peek(){
    if(top <= 0){
        cout<<"the stack is empty";
    }else{
        cout<<arr[top]<<"the top element"<<endl;
    }
};
void pop(){
    if(top <= 0){
        cout<<"the stack is empty";
    }else{
        cout<<arr[top--]<<"the poped element"<<endl;
    }
};

bool empty(){
    if(top <= 0){
        return true;
    }else{
        return false;
    }
}
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    

}