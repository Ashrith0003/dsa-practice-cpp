// #include<iostream>
// using namespace std;
// #define max 20
// class stack{
//     int arr[max];
//     int top;

//     stack(){
//         top=-1;
//     }

//     bool isFull(){
//         if(top == max-1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     void push(int value){
//         if(isFull){
//             cout<<"The stack is full"<<endl;
//         }else{
//             arr[++top]=value;
//             cout<<"popped :"<<arrr[top]<<endl;
//         }
//     }

//     void pop{
//         if(isEmpty()){
//             cout<<"stack is empty"<<endl;
//         }else{
//             cout<<"popped :"<<arr[top--]<<endl;
//         }
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"the stack is empty"<<endl;
//         }else{
//             cout<<"peek"<<arr[top]<<endl;
//         }
//     }
// }

// int main(){
//     stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     while(!s.isEmpty()){
//         cout<<" "<<s.peek()<<endl;
//         s.pop();
//     }

//     return 0;
// }