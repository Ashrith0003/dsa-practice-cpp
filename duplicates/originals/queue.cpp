#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int value){
        data =value;
        next =NULL;
    }

};
class queue {
    Node*head;
    Node*tail;

public:
       queue(){
        head = tail =NULL; 
       } 

    void push(int data){
        Node*newnode =new Node(data);
        if(empty()){
            head=tail=newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    };
    void pop(){
        if(empty()){
            cout<<"linklist is empty";
        }else{
             Node*temp = head;
             head = head->next ;
             delete temp;
        }
    };

    int front(){
        if(empty()){
            cout<<"linklist is empty";
        }else{
            return head->data;

        }

    }

    bool empty(){
        if(head==NULL){
            return true;
            
        }else{
            return false;
        }
    }

};

int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}


//pratice-1//
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// class Queue{
//     Node*head;
//     Node*tail;
// public:
//     Queue(){
//         head = tail = NULL;
//     }

//     void push(int data){
//         Node*newnode = new Node(data);
//         if(empty()){
//             head = tail = newnode;  
//         }else{
//             tail ->next = newnode;
//             tail = newnode;
//         }
//     }

//     void pop(){
//         if(empty()){
//             cout<<"empty^-^";
//         }else{
//             Node*temp =head;
//             head =head->next;
//             delete temp;
//         }
//     }

//     int front(){
//         if(empty()){
//             cout<<"empty^-^";
//         }else{
//             return head->data;
//         }

//     }

//     bool empty(){
//         if(head==NULL){
//             return true;
//         }else{
//             return false;
//         }
//     };
// };

// int main(){
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;
// }


// Queue using stl in cpp //
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_back(40);
//     dq.push_front(50);
//     cout<<dq.front()<<" "<<dq.back()<<" ";
// }

// #include<iostream>
// using namespace std;
// class circularQueue{
//     int*arr;
//     int cap,currentsize;
//     int f,r;
// public:
//     circularQueue(int size){
//         cap = size;
//         arr = new int[size];
//         currentsize =0;
//         f=0;
//         r=-1;
//     }

//     void push(int value){
//         if(currentsize == cap){
//             cout<<"circularQueue is full";
//             return ;
//         }else{
//             r=(r+1)%cap;
//             arr[r] = value;
//             currentsize++;
//         }
//     }

//     void pop(){
//         if(empty()){
//             cout<<"empty ^-^";
//         }else{
//             f=(f+1)%cap;
//             currentsize--;
//         }
//     }

//     int front(){
//         if(empty()){
//             cout<<"empty ^-^";
//             return -1;
//         }else{
//             return arr[f];
//         }
//     }

//     bool empty(){
//         if(currentsize == 0){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     void printelemnts(){
//         for(int i=0;i<cap;i++) {
//             cout<<arr[i]<<" ";
//         }
//     }

// };

// int main(){
//     circularQueue cq(3);
//     cq.push(10);
//     cq.push(20);
//     cq.push(30);
//    // cq.printelemnts();//
//    while(!cq.empty()){
//     cout<<cq.front()<<" ";
//     cq.pop();
//    }
//     return 0;

// }

#include<iostream>
using namespace std;
class circularQueue{
    int *arr;
    int currentsize,cap;
    int f,r;
public:
    circularQueue(int size){
        cap = size;
        arr =new int[size];
        currentsize = 0;
        f = 0;
        r = -1;
    }
    void push(int value){
        if(currentsize == cap){
            cout<<"FULL";
        }else{
            r=(r+1)%cap;
            arr[r]=value;
            currentsize++;
        }
    }

    void pop(){
        if(empty()){
            cout<<"empty ^-^";
        }else{
            f=(f+1)%cap;
            currentsize--;
        }
    }

    int front(){
        if(empty()){
            cout<<"empty ^-^";
            return -1;
        }else{
            return arr[f];
        }
    }

    bool empty(){
        if(currentsize == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    circularQueue q(3);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
}

