// #include<iostream>
// #include<stack>
// using namespace std;
// class stack{
//     int arr[100];
//     int top;
// public:
//     stack(int size){
//         int arr[100];
//         top =-1;
//         int max_element = size;
//     }

// void push(int value){
//     if(top => max_element-1){
//         cout<<"the stack is full";
//     }else{
//         arr[++top]= value;
//         cout<<value<<"pushed";
//     }
// }

// void pop(){
//     if(top < 0){
//         cout<<"the stack is empty";
//     }else{
//         cout<<arr[--top]<<"poped";
//     }
// }

// bool isempty(){
//     return (top < 0);
// }
// int peek (){
//     cout <<arr[top];
// }

// }


// bool isempty(){
//     if(rare == size-1){
//         return true;
//     }else{
//         return false;
//     }
// }

// bool isfull(){
//     if(front == -1 ||front >rare){
//         return true;
//     }else{
//         return false;
//     }
// }


// void enqueue(int value){
//     if(isfull){
//         cout<<"the queue is full";
//     }
//     if(front == -1){
//         front = 0;
//         arr[++rare]= value;
//     }
// }
// void dequeue(){
//     if(isempty()){
//         cout<<"the queue is empty";
//     }
//     arr[front];
//     front++;
// }




// #include<iostream>
// using namespace std;
// class stack{
//     int arr[100];
//     int top;
//     int max_element;
// public:
//     stack(int size =100){
//         top = -1;
//          max_element = size;
//     }

//     bool isempty(){
//         if(top == -1){
//           return true;
//         }else{
//             return false;
//         }
//     }

//     void push(int value){
//         if(top == max_element-1){
//             cout<<"the stack is full";
//         }else{
//             arr[++top] = value;
//             cout<<"The pushed value"<<value;
//         }
//     }

//     void pop(){
//         if(isempty()){
//             return;
//         }else{
//             cout<<arr[top--]<<"poped value";
//         }
//     }

//     int peek(){
//         if(isempty()){
//             return;
//         }else{
//             cout<<arr[top]<<"top value";
//         }
//     }
// };

// #include<iostream>
// using namespace std;
// class queue{
//     int arr[100];
//     int front;
//     int rare;

//     queue(int size =100){
//         front=-1;
//         rare =-1;
//     }

//     bool isempty(){
//         if(front ==-1||front >rare){
//             return true ;
//         }else{
//             return false;
//         }
//     }

//     bool isfull(){
//         if(rare == size-1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     void enqueue(int value){
//         if(isfull()){
//             return;
//         }else{
//             if(front == -1){
//                 front = 0;
//             }
//             arr[++rare] = value;
//             cout<<"the pushed value "<<value;
//         }
//     }

//     void dequeue(){
//         if(isempty){
//             return;
//         }else{
//             front++;
//             cout<<arr[front]<<"is poped";
//         }
//     }
// }
void insertion(){
    arr[size] == value;
    heapfiyup(size);
    size++;
}
void deletion(){
    arr[0]=arr[size-1];
    size--;
    heapfiydown(0);
}

heapfiyup(){
    while(index >0){
        int parent =(index-1)/2;
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
        }
        index =parent;
    }
}

heapfiydown(){
    while(true){
        int largest = index;
        int left = 2*index+1;
        int right =2*right+2;
        if(left<size && arr[left]>arr[largest]){
            largest =left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest =right;
        }
        if(largest != index){
            swap(arr[largest],arr[index]);
            index =larest;
        }
    }
    }
}
