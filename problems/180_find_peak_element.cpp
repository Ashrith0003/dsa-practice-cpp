problem-6//
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int low =0;
   int ans = 0;
   int high = n-1;
   while(low<=high){
      int mid = low +(high -low)/2;
      bool rightsmall = (mid == 0) || arr[mid] < arr[mid+1];
      bool leftsmall = (mid == n-1) || arr[mid] <arr[mid-1];
      if(rightsmall && leftsmall){
         ans = mid;
         break;
      }else if(mid != n-1 && arr[mid] < arr[mid+1]){
         low = mid+1;
      }else{
         high = mid-1;
      }
   
   };

    cout << "Peak index: " << ans << endl;
    cout << "Peak value: " << arr[ans] << endl;
    return 0;
};
