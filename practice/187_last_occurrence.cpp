last occreance of the number using binary search//
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int low =0;
    int high = n-1;
    int ans0 = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target){
            ans0 = mid;
            low = mid+1;
        }else if(arr[mid] > target){
            high = mid -1;
        }else{
            low = mid+1;
        }
        
    }
    cout<<"last occurrence: "<<ans0;
    return 0;
}
