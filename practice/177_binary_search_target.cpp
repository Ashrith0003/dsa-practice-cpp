problem-3//
#include<iostream>
using namespace std;
int main(){
    int nums[]={1,3,5,6};
    int target = 7;
    int n = sizeof(nums)/sizeof(nums[0]);
    int low =0;
    int high = n-1;
    bool found = false;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(nums[mid]== target){
            cout<<"the answer is :"<<mid;
            found = true;
            break;
        }else if(nums[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    if(!found){
        cout<<"the position is : "<<low;
    }

    return 0;
}
