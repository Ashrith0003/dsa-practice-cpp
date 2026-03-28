#include<iostream>
using namespace std;
class circularQueue{
    int*arr;
    int cap,currentsize;
    int f,r;
public:
    circularQueue(int size){
        cap = size;
        arr = new int[size];
        currentsize =0;
        f=0;
        r=-1;
    }

    void push(int value){
        if(currentsize == cap){
            cout<<"circularQueue is full";
            return ;
        }else{
            r=(r+1)%cap;
            arr[r] = value;
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

    void printelemnts(){
        for(int i=0;i<cap;i++) {
            cout<<arr[i]<<" ";
        }
    }

};

int main(){
    circularQueue cq(3);
    cq.push(10);
    cq.push(20);
    cq.push(30);
   // cq.printelemnts();//
   while(!cq.empty()){
    cout<<cq.front()<<" ";
    cq.pop();
   }
    return 0;

}
