#include<iostream>
using namespace std;
int main(){
    int nums[] = {1,2,3,4,5,6};
    int n = sizeof(nums)/sizeof(nums[0]);
    int arr[2*n];

    for(int i =0;i<n;i++){
        arr[i] = nums[i];
        arr[i+n] = nums[i];
    }

    for(int i=0;i<2*n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}