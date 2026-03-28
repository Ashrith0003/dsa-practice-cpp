#include<iostream>
using namespace std;
void display(int n ,int arr[]){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}

void insertion_sort(int n ,int arr[]) {
     for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    display(n,arr);
}

int main(){
    int arr[8]={7,6,5,4,2,10,20,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(n,arr);
}
