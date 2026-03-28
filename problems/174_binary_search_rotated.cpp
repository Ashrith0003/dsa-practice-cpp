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