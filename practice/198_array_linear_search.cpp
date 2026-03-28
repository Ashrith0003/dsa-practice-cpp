#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    bool found = false;
    cout<<"enter the key :";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<" the element is at "<< i <<" and "<<arr[i];
            found = true;
            break;
        }
    }
      if(!found){
        cout<<"Element not found";
    }
    return 0;
}
