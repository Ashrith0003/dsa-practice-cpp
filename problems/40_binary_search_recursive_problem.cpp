#include<iostream>
using namespace std;
// int BinarySearchNonRecersive(int arr[],int target,int size){
//     int start = 0;
//     int end = size-1;
//     while(start <= end ){
//         int mid = start +(end - start)/2;
//         if(arr[mid] == target){
//             return mid ;
//         }else if(arr[mid] < target){
//             start = mid +1 ;
//         }else {
//             end = mid - 1;
//         }   
//     }

//     return -1;
// };

int BinarySearchRecersive(int arr[],int target,int start,int end){
    while(start > end ){
        return -1;
    }
        int mid = start +(end - start)/2;
        if(arr[mid] == target){
            return mid ;
        }else if(arr[mid] < target){
            return BinarySearchRecersive(arr,target,mid+1,end);
        }else {
           return BinarySearchRecersive(arr,target,start,mid-1);
        }   
    
    return -1;
};

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<< "enter the target :";
    cin>> target;
    // cout << BinarySearchNonRecersive(arr,target,size);
    cout << BinarySearchRecersive(arr,target,0,size-1);
}
