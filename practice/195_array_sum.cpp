#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0 ;
    for(int i=1;i<n;i++){
        sum +=arr[i];
    }
    cout<<"the sum  :"<<sum;
    return 0;
}
