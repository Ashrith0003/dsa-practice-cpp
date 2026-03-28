#include<iostream>
using namespace std;
# define max 100
struct stack{
    char arr[max];
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

char peek(){
    if(isEmpty()){
        cout<<"the stack is empty"<<endl;
        return '\0';
    }else{
        return arr[top];
    } 
}

bool checker(){
    for(int i=0;i<arr.length();i++){
        char c = arr[i];

        if(c == '('||c == '{'||c == '['){
            push(c);
        }else if(c == ')'||c == '}'||c == ']'){
            if(isEmpty()){
                return false;
            }else{
                pop();
            } 
        }
        char top = peek;
        if(c == ')' && st.top() == '(')return false;
        if(c == ']' && st.top() == '[')return false;
        if(c == '}' && st.top() == '{')return false; 
        pop();
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