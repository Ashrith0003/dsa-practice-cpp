problem 1//
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,10,25,30,35,40};
    int target = 40;
    int n = sizeof(arr[0])/sizeof(arr);
    int high = n-1;
    int low = 0;
    while(low<=high){
        int mid = low+(high -low)/2;
        if(arr[mid] == target){
            cout<<mid;
            break;
        }else if(arr[mid] > target){
            high =mid -1;
        }else{
            low = mid +1;
        }
    }
    return 0;
}
