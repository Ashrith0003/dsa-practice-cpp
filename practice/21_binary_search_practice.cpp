#include<iostream>
using namespace std;
int main(){
    int low  = 0;
    int high = 10;
    int mid = (high+low)/2;
    int arr[10] ={1,2,3,4,5,6,7,8,9};
    int key = 5;
    while(high >= low){
        if(arr[mid]==key){
            cout<<mid;
        }else{
            if(arr[mid] > key){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
    }
}
