#include<iostream>
using namespace std;
class stack{
    int top;
    int arr[100];
    int max_element;
public :
        stack(int size = 100){
            top = -1;
            max_element = size;
        }

    void push(int value){
        if(top >= max_element -1){
            cout<<"THE satck is full";
        }else{
            arr[++top] = value ;
            cout<<
        }
    }
}