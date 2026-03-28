#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int key,flag = 0;
    cout<<"enter the key :";
    cin>>key;
    for(int i=0;i<10-1;i++){
        if(arr[i]==key){
            cout<<i,key;
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"element not found ";
    }
    return 0;
}
