#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first_largest =arr[0];
    int second_largest;
    for(int i=1;i<n;i++){
        if(arr[i]>first_largest){
            second_largest=first_largest;
            first_largest=arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != first_largest){
            second_largest = arr[i];
        }
    }
    cout<<"the second largest :"<<second_largest;
    return 0;
}
