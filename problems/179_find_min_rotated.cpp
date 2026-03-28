problem-5 //
#include<iostream>
using namespace std;
int main(){
    int arr[]={4, 5, 6, 7, 1, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high = n-1;
    int low =0;
    int ans =arr[0];

    while(low<=high){
        int mid = low+(high -low)/2;
        if(arr[low] <= arr[mid]){
            ans = min(ans,arr[low]);
            low = mid+1;
        }else{
            ans =min(ans,arr[mid]);
            high =mid-1;
        }
    }
    cout<<"the asnwer is :"<<ans;
    return 0;
};
