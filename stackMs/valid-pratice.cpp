#include<iostream>
using namespace std;
#define max 20
class stack {
    char arr[max];
    int top;
public:
    stack(){
        top =-1;
    }
    bool isEmpty(){
        return(top ==-1);
    }

    bool isFull(){
        return(top == max-1);
    }
    char peek(){
        if(isEmpty()){
            return '\0'
        }else{
            return arr[top];
        }
    }

    void push(char value){
        if(isFull()){
            cout<<"empty"<<endl;
        }else{
            arr[++top] = value;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"empty"<<endl;
        }else{
            arr[top--];
        }
    }

    bool check(string str){
        for(int i =0;i<str.length();i++){
            char c =str[i];

            if()
        }
    }

}