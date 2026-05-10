#include<iostream>
using namespace std;
#define MAX 20

class stack {
    char arr[MAX];
    int top;

public:                           
    stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char value) {
        if(isFull()) {
            cout << "The stack is full" << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed: " << arr[top] << endl;  
        }
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    char peek() {                 
        if(isEmpty()) {
            cout << "Stack is empty" << endl;
            return '\0';           
        } else {
            return arr[top];
        }
    }

    bool checker(string str) {
        stack st;                  

        for(int i = 0; i < str.length(); i++) {  
            char c = str[i];

            if(c == '{' || c == '[' || c == '(') {
                st.push(c);       

            } else if(c == '}' || c == ']' || c == ')') {

                if(st.isEmpty()) return false;  

                char chartop = st.peek();       

                if(c == ')' && chartop != '(') return false;  
                if(c == ']' && chartop != '[') return false;
                if(c == '}' && chartop != '{') return false;

                st.pop();         
            }
        }
        return st.isEmpty();       
    }
};  

int main() {
    stack s;
    string input;

    cout << "Enter bracket string: ";
    cin >> input;

    if(s.checker(input)) {
        cout << "Valid brackets " << endl;
    } else {
        cout << "Invalid brackets " << endl;
    }

    return 0;
}