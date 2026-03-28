#include<iostream>
using namespace std;
// array//

class Stack {
    int top;
    int arr[100];      // fixed-size array for stack elements
    int max_element;   // maximum number of elements in stack

public:
    // constructor
    Stack(int size = 100) { // by defult value if the use not given value for the array//
        top = -1;
        max_element = size;
    }

    // push element onto stack
    void push(int value) {
        if (top >= max_element - 1) {
            
            cout << "Can't push, stack is full" << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed element: " << value << endl;
        }
    }

    // pop element from stack
    void pop() {
        if (top < 0) {
            cout << "The stack is empty" << endl;
        } else {
            cout << arr[top--] << " popped from stack" << endl;
        }
    }

    // check if stack is empty
    bool empty() {
        return (top < 0);
    }

    // view the top element
    void peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
};

// main function
int main() {
    Stack s(5); // create stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();
    s.peek();

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//     vector<int> v;

// public:
//          void push(int value){
//             v.push_back(value);
//          }

//          void pop(){
//             v.pop_back();
//          }

//          int top(){
//             return v[v.size()-1];
//          }

//          bool empty(){
//             if(v.size() == 0){
//                 return true;    
//             }else{
//                 return false;
//             }
//          }

// };
// int main(){
//     stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while(! s.empty()){
//         cout<<s.top <<endl;
//         s.pop();
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
// vector<int> price ={100,80,60,70,60,75,85};
// vector<int> ans(price.size(),0);
// stack<int> s;

// for(int i=0;i<price.size();i++){
//     while(s.size() > 0 && price[s.top()] <= price[i]){
//         s.pop();
//     }

//     if(s.empty()){
//         ans[i] = i+1;
//     }else{
//         ans[i] = i -s.top();
//     }

//     s.push(i);
// }


// for(int val :ans){
//     cout<<val<<" ";
// }
// cout<<endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
//     vector<int> price ={100,80,60,70,60,75,85};
//     vector<int> ans(price.size(),0);
//     stack<int> s;

//     for(int i=0;i<price.size();i++){
//         while(!s.empty() && price[s.top()] <= price[i]){
//             s.pop();

//         }
//             if(s.empty()){
//                 ans[i]=i+1;
//             }else{
//                 ans[i] = i - s.top();
//             }
        
//         s.push(i);
//     }

//     for(int val :ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
//     vector<int> arr ={6,8,0,1,3};
//     vector<int> ans(arr.size(),0);
//     stack<int> s;

//     for(int i =arr.size()-1;i>=0;i--){
//         while(!s.empty()&& arr[s.top()] <=arr[i]) {
//             s.pop();
//         }
//         ans[i]=(s.empty()) ? -1 :arr[s.top()];
//         s.push(i);
//     }
//     for(int x : ans){
//         cout << x << " ";
//     }

//     return 0;
// }
