// #include<iostream>
// using namespace std;

// int binarysearch(int arr[], int n, int target) {

//     int low = 0;
//     int high = n - 1;

//     while(low <= high) {

//         int mid = low + (high - low) / 2;

//         if(arr[mid] == target) {
//             return mid;
//         }
//         else if(arr[mid] < target) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     return -1;  // not found
// }

// int main() {
//     int arr[] = {1,3,5,7,9,11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int result = binarysearch(arr, n, 7);

//     if(result != -1)
//         cout << "Element found at index: " << result;
//     else
//         cout << "Element not found";

//     return 0;
// }



       // first occerance of the number using binary search//
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 2;
//     int low =0;
//     int high = n-1;
//     int ans0 = -1;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(arr[mid] == target){
//             ans0 = mid;
//             high = mid-1;
//         }else if(arr[mid] < target){
//             low =mid+1;
//         }else {
//             high = mid -1;
//         }
//     }
//     cout<<"first occurrence: "<<ans0;
//     return 0;
// }


        //last occreance of the number using binary search//
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 2;
//     int low =0;
//     int high = n-1;
//     int ans0 = -1;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(arr[mid] == target){
//             ans0 = mid;
//             low = mid+1;
//         }else if(arr[mid] > target){
//             high = mid -1;
//         }else{
//             low = mid+1;
//         }
        
//     }
//     cout<<"last occurrence: "<<ans0;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={1,3,5,6};
//     int n=sizeof(nums[0])/sizeof(nums);
//     int low =0;
//     int high = n-1;
//     int ans = n;
//     int target = 5;
//     bool found = false;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(nums[mid] >= target){
//                 ans = mid;
//                 high = mid-1;
//         }else{
//                 low = mid+1;
//         }
//     };
//     cout<<"the element is at : "<<ans<<endl;
//     return 0;
// }






//     int low = 0;
//     int high = n - 1;

//     while(low <= high) {

//         int mid = low + (high - low) / 2;

//         if(arr[mid] == target) {
//             return mid;
//         }
//         else if(arr[mid] < target) {
//              high = mid - 1;
//         }
//         else {
//              low = mid + 1;
            
//         }
//     }

//     return -1;  // not found
// }