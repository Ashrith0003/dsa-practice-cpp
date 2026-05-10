// #include<iostream>
// using namespace std;
// class queue{
//     int*arr;
//     int front,rare,size;
// public:
//     queue(int n){
//         size = n;
//         arr = new int[size];
//         rare=front=-1;
//     }


//     void enqueue(int val){
//         if(front == 0 && rare == size-1 || (front == rare + 1)){
//             cout<<"Queue is full\n";
//             return;
//         }

//         if(front == rare){
//             front = rare = 0;
//         }else{
//             rare =(rare+1)%size;
//         }

//         arr[rare] = val;
//     }

//     void dequeue(){
//         if(front == -1){
//             cout<<"Empty";
//             return;
//         }

//         if(front == rare){
//             front=rare=-1;
//         }else{
//             front = (front+1)%size;
//         }
//     }

//     void display(){
//           if (front == -1) {
//             cout << "Empty\n";
//             return;
//         }

//         int i = front;
//         while(true){
//             cout<<arr[i]<<" ";
//             if(i == rare){
//                 break;
//             }
//             i =(i+1)%size;
//         }
//         cout << endl;
//     }
// };

// int main(){
//     queue q(5);
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.dequeue();
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60);
//     q.display();
//     return 0;
// }