#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int lowest =arr[0] ;
    for(int i=1;i<7;i++){
        if(arr[i] <lowest){
            lowest = arr[i];
        }
    }
    cout<<"the min number :"<<lowest;
    return 0;
}
