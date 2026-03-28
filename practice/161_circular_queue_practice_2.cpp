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

