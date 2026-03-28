#include<iostream>
using namespace std;
int main(){
    int arr[]={3, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int h =6;
    int low =1;
    int high = max(arr);
    int hours =0;
    while(low<=high){
        int mid = low+(high -low)/2;
        if(arr[mid]/h == h){
            hours = h;
        }else if(arr[mid]/h <= h){
            hours = h;
            high = mid-1;
        }else{
            low=mid+1;
        }

    }

    cout<<"the answer is "<<hours;
    return 0;
}