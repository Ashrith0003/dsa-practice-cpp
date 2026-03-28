#include<iostream>
using namespace std;
int main(){
    int nums[]={1,3,5,6};
    int n=sizeof(nums[0])/sizeof(nums);
    int low =0;
    int high = n-1;
    int ans = n;
    int target = 5;
    bool found = false;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
        }else{
                low = mid+1;
        }
    };
    cout<<"the element is at : "<<ans<<endl;
    return 0;
}
