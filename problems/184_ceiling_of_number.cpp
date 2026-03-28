  //problem -10//
#include<iostream>
using namespace std;
int main(){
   int arr[]={1, 2, 3, 7, 9};
   int target =4;
   int n = sizeof(arr)/sizeof(arr[0]);
   int low =0;
   int high = n-1;
   int ans =0;
   while(low<=high){
      int mid = low+(high -low)/2;  
      if(arr[mid]== target){
         ans = mid;
         break;
      }else if(arr[mid] < target){
         low = mid+1;
      }else{
         ans =mid;
         high = mid-1;
      }
   }
   cout<<"the celling is : "<<ans <<endl;
   cout<<"the celling element is : "<<arr[ans] <<endl;
   return 0; 
};