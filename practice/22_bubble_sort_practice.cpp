#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,7,8,10,12,14,20,40,100,30};
    for(int i=0;i<10-1;i++){
        for(int j=0;j< 10-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
