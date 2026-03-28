#include<iostream>
using namespace std;
int main(){
    int nums[]={1,3,5,7,9,11};
    int n = sizeof(nums)/sizeof(nums[0]);
    int high = n-1;
    int low = 0;
    int target = 20;
    bool found = false;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            cout<<mid;
            found = true;
            break;
        }else if(nums[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    if(!found){
        cout<<"not found ";
    }
    
}
