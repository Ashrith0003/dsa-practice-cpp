// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // class stack{
// // // // //     int top;
// // // // //     int arr[100];
// // // // //     int max_element;
// // // // // public:
// // // // //     stack(int size = 100){
// // // // //         top = -1;
// // // // //         max_element = size;
// // // // //  }
// // // // // void push(int value){
// // // // //     if(top >= max_element-1){
// // // // //         cout << "can't push stack is full"<<endl;
// // // // //     }else{
// // // // //         arr[++top] = value;
// // // // //         cout<<"pushed element "<< value<<endl;
// // // // //     }
// // // // // }
// // // // // void pop(){
// // // // //     if(top <= 0){
// // // // //         cout <<"THe stack is empty"<<endl;
// // // // //     }else{
// // // // //         cout<<arr[top--]<<"pop THE element"<<endl;
// // // // //     }
// // // // // }

// // // // // bool empty(){
// // // // //     if(top <= 0){
// // // // //         return true;
// // // // //     }
// // // // //     else{
// // // // //         return false;
// // // // //     }
// // // // // }
// // // // // void peek(){
// // // // //     if(top <= 0){
// // // // //         cout<<"stack is empty"<<endl;
// // // // //     }else{
// // // // //         cout<<arr[top]<<endl;
// // // // //     }
// // // // // }
// // // // // };
// // // // // int main() {
// // // // //     stack s(5);
// // // // //     s.push(10);
// // // // //     s.push(20);
// // // // //     s.push(30);
// // // // //     s.peek();
// // // // //     s.pop();
// // // // //     s.peek();
// // // // //     if (s.empty()) {
// // // // //         cout << "Stack is empty" << endl;
// // // // //     } else {
// // // // //   cout << "Stack is not empty" << endl;
// // // // //     }

// // // // //     return 0;
// // // // // }
