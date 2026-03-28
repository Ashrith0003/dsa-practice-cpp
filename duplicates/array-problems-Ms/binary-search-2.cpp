
              // problem number 2//
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter the x value : ";
//     cin>>x;
//     if(x<2){
//         cout<<"The answer is :"<<x; 
//     }else{
//     int high = x;
//     int low =0;
//     int ans =0;
//     while(low<=high){
//         int mid = low+(high - low)/2;
//         if(mid <= x/mid){
//             ans = mid;
//             low = mid+1;
//         }else{
//             high =mid-1;
//         }
//     }
//     cout<<"The answer is : "<<ans;
//     }
// }

     // problem 1//
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,8,10,25,30,35,40};
//     int target = 40;
//     int n = sizeof(arr[0])/sizeof(arr);
//     int high = n-1;
//     int low = 0;
//     while(low<=high){
//         int mid = low+(high -low)/2;
//         if(arr[mid] == target){
//             cout<<mid;
//             break;
//         }else if(arr[mid] > target){
//             high =mid -1;
//         }else{
//             low = mid +1;
//         }
//     }
//     return 0;
// }

   // problem-3//
// #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={1,3,5,6};
//     int target = 7;
//     int n = sizeof(nums)/sizeof(nums[0]);
//     int low =0;
//     int high = n-1;
//     bool found = false;
//     while(low <= high){
//         int mid = low+(high-low)/2;
//         if(nums[mid]== target){
//             cout<<"the answer is :"<<mid;
//             found = true;
//             break;
//         }else if(nums[mid] < target){
//             low = mid+1;
//         }else{
//             high = mid-1;
//         }
//     }

//     if(!found){
//         cout<<"the position is : "<<low;
//     }

//     return 0;
// }

// problem 4 //
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {4,5,6,7,1,2,3};
//     int target = 1;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int high = n-1;
//     int low = 0;
//     bool found = false;

//     while(low<=high){
//         int mid =low+(high-low)/2;
//         if(arr[mid] == target){
//             cout<<mid;
//             found = true;
//             break;
//         }else if(arr[low] <= arr[mid]){
//             if(target >= arr[low] && target < arr[mid]){
//                 high = mid-1;
//             }else{
//                 low = mid+1;
//             }
//         }else{
//             if(target <= arr[high] && target > arr[mid]){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }

//     }
// };

// problem-5 //
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={4, 5, 6, 7, 1, 2, 3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int high = n-1;
//     int low =0;
//     int ans =arr[0];

//     while(low<=high){
//         int mid = low+(high -low)/2;
//         if(arr[low] <= arr[mid]){
//             ans = min(ans,arr[low]);
//             low = mid+1;
//         }else{
//             ans =min(ans,arr[mid]);
//             high =mid-1;
//         }
//     }
//     cout<<"the asnwer is :"<<ans;
//     return 0;
// };


// problem-6//
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={1,2,3,1};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int low =0;
//    int ans = 0;
//    int high = n-1;
//    while(low<=high){
//       int mid = low +(high -low)/2;
//       bool rightsmall = (mid == 0) || arr[mid] < arr[mid+1];
//       bool leftsmall = (mid == n-1) || arr[mid] <arr[mid-1];
//       if(rightsmall && leftsmall){
//          ans = mid;
//          break;
//       }else if(mid != n-1 && arr[mid] < arr[mid+1]){
//          low = mid+1;
//       }else{
//          high = mid-1;
//       }
   
//    };

//     cout << "Peak index: " << ans << endl;
//     cout << "Peak value: " << arr[ans] << endl;
//     return 0;
// };

 //problem -7//
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={5, 7, 7, 8, 8, 10};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int target = 8;
//    int low = 0;
//    int high = n-1;
//    int ans = -1;
//    while(low<=high){
//       int mid = low +(high - low)/2;
//       if(arr[mid]== target){
//          ans = mid;
//          high = mid-1;
//       }else if(arr[mid] < target){
//          low = mid+1;
//       }else{
//          high = mid-1;
//       }
//    };


   
//     low = 0; high = n-1; 
//     int last = -1;
//     while(low<=high){
//       int mid = low +(high - low)/2;
//       if(arr[mid] == target){
//          last = mid;
//          low = mid+1;
//       }else if(arr[mid] < target){
//          low = mid+1;
//       }else{
//          high = mid-1;
//       }
//    }


//    cout<<"the first occurance of the element at index : " << ans<<endl;
//    cout<<"the last occurance of the element at index : " << last<<endl;
//    return 0;
// };

  //problem - 8//
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {4, 5, 6, 7, 1, 2, 3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int high = n-1;
//     int low = 0;
//     int ans = arr[0];
//     int ans2 = 0;        

//     while(low <= high){
//         int mid = low + (high-low)/2;

//         if(arr[low] <= arr[mid]){
//             if(arr[low] < ans){   
//                 ans = arr[low];
//                 ans2 = low;
//             }
//             low = mid+1;
//         }else{
//             if(arr[mid] < ans){   
//                 ans = arr[mid];
//                 ans2 = mid;
//             }
//             high = mid-1;
//         }
//     }

//     cout << "Minimum element: " << ans  << endl;
//     cout << "Number of rotations: " << ans2 << endl;
//     return 0;
// }

    //probelm - 9//
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={5, 7, 7, 8, 8, 10};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int target = 8;
//    int low = 0;
//    int high = n-1;
//    int first = -1;
//    while(low<=high){
//       int mid = low +(high-low)/2;
//       if(arr[mid]==target){
//          first=mid;
//          high =mid-1;
//       }else if(arr[mid] < target){
//          low = mid+1;
//       }else{
//          high = mid-1;
//       }
//    }

//    low = 0;high = n-1;
//    int last = -1;
//    while(low<=high){
//       int mid = low +(high-low)/2;
//       if(arr[mid]==target){
//          last=mid;
//          low =mid+1;
//       }else if(arr[mid] < target){
//          low = mid+1;
//       }else{
//          high = mid-1;
//       }
//    }
//    int count = last - first+1;
//    cout<<count;
//    return 0;

// };

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