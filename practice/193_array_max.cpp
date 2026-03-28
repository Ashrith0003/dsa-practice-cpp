#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,10,40,100,20,700,500};
    int largest =arr[0] ;
    for(int i=0;i<10;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"the max number :"<<largest;
    return 0;
}
