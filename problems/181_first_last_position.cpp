problem -7//
#include<iostream>
using namespace std;
int main(){
   int arr[]={5, 7, 7, 8, 8, 10};
   int n = sizeof(arr)/sizeof(arr[0]);
   int target = 8;
   int low = 0;
   int high = n-1;
   int ans = -1;
   while(low<=high){
      int mid = low +(high - low)/2;
      if(arr[mid]== target){
         ans = mid;
         high = mid-1;
      }else if(arr[mid] < target){
         low = mid+1;
      }else{
         high = mid-1;
      }
   };


   
    low = 0; high = n-1; 
    int last = -1;
    while(low<=high){
      int mid = low +(high - low)/2;
      if(arr[mid] == target){
         last = mid;
         low = mid+1;
      }else if(arr[mid] < target){
         low = mid+1;
      }else{
         high = mid-1;
      }
   }


   cout<<"the first occurance of the element at index : " << ans<<endl;
   cout<<"the last occurance of the element at index : " << last<<endl;
   return 0;
};
