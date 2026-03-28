problem 4 //
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,6,7,1,2,3};
    int target = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    int high = n-1;
    int low = 0;
    bool found = false;

    while(low<=high){
        int mid =low+(high-low)/2;
        if(arr[mid] == target){
            cout<<mid;
            found = true;
            break;
        }else if(arr[low] <= arr[mid]){
            if(target >= arr[low] && target < arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(target <= arr[high] && target > arr[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

    }
};
