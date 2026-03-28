#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}
