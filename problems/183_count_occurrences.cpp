probelm - 9//
#include<iostream>
using namespace std;
int main(){
   int arr[]={5, 7, 7, 8, 8, 10};
   int n = sizeof(arr)/sizeof(arr[0]);
   int target = 8;
   int low = 0;
   int high = n-1;
   int first = -1;
   while(low<=high){
      int mid = low +(high-low)/2;
      if(arr[mid]==target){
         first=mid;
         high =mid-1;
      }else if(arr[mid] < target){
         low = mid+1;
      }else{
         high = mid-1;
      }
   }

   low = 0;high = n-1;
   int last = -1;
   while(low<=high){
      int mid = low +(high-low)/2;
      if(arr[mid]==target){
         last=mid;
         low =mid+1;
      }else if(arr[mid] < target){
         low = mid+1;
      }else{
         high = mid-1;
      }
   }
   int count = last - first+1;
   cout<<count;
   return 0;

};
