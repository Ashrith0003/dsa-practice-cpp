// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,2,4,6,8,9};
// int n =sizeof(arr)/sizeof(arr[0]);
// int target = 10;
// int right = n-1;
// int left = 0;
// bool found = false;
// while(left  < right){
//     int sum = arr[left]+arr[right];
//     if(sum ==target){
//         cout<<left<<","<<right;
//         found =true;
//         break;
//     }else if(sum > target){
//         right--;
//     }else{
//         left++;
//     }
// }
// if(!found){
//     cout<<"No pair found ";
// }
// return 0;

// }
  

// moving zeros to end //
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]={0,1,0,3,12};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     int left =0;
//     for(int right =0;right<n;right++){
//         if(arr[right]!=0){
//             swap(arr[left],arr[right]);
//             left++;
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// int main(){
//     int arr[] ={1,8,6,2,5,4,8,3,7};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     int left = 0;
//     int right = n-1;
//     int max_water =0;
//     while(left < right){
//         int sum = arr[left]+arr[right]; //water problem//important //
//         if(max_water > sum){
//             max_water = sum;
//         }else if(arr[left] > arr[right]){
//             right++;
//         }else{
//             left++;
//         }

//     }
//     cout<<max_water;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,1,2,2,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int slow =3;
    for(int fast =3;fast<n;fast++){
        if(arr[fast]!=arr[slow-3]){
            arr[slow]=arr[fast];
            slow++;
        }
    }
    for(int i=0;i<slow;i++){
        cout<<arr[i]<<endl;
    };
    return 0;
}


