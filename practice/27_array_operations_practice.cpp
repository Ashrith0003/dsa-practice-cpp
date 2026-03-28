#include<iostream>
using namespace std;

void insertAtbg(int value){
    if(n == max-1){
        cout<<"array is full";
    }else{
        for(int i=n;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = value;
        n++;
    }
}

void deleteAtbg(){
    if(n == 0){
        cout<<"array is empty";
    }else{
        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        n--;
    }
}

void insertatend(int value){
    if(n == max-1){
        cout<<"array is full";
    }else{
        arr[n] = value;
    }
}

void deleteAtend(){
    if(n == 0){
        cout<<"array is empty";
    }else{
        n--;
    }
}


void insertatpos(int value,int pos){
    if(pos < 0|| pos > n){
        cout<<"invalid pos";
    }else{
        for(int i=n;i>=pos;i--){
            arr[i] = arr[i-1];
        }
        arr[pos]= value;
        n++;
    }
}

void deleteAtPosition(int arr[], int &n, int pos){
    if(n == 0){
        cout << "Array is empty\n";
        return;
    }

    for(int i = pos-1; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
