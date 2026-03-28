// #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={1,3,5,7,9,11};
//     int n = sizeof(nums)/sizeof(nums[0]);
//     int high = n-1;
//     int low = 0;
//     int target = 20;
//     bool found = false;
//     while(low <= high){
//         int mid = low+(high-low)/2;
//         if(nums[mid]==target){
//             cout<<mid;
//             found = true;
//             break;
//         }else if(nums[mid] < target){
//             low = mid+1;
//         }else{
//             high = mid-1;
//         }
//     }

//     if(!found){
//         cout<<"not found ";
//     }
    
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,1,2,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int right = n-1;
    int left = 0;
    int target = 1;
    while(left <= right){
        int mid = left +(right - left)/2;
        if(arr[mid] == target){
            return mid;
        } 
        if(arr[left] <= arr[mid]){
            if(target >= arr[left] && target < arr[mid]){

            }

        }
    }
}