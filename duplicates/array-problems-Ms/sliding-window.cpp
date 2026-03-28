// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int windowsum =0;
//     int k =3;
//     for(int i=0;i<k;i++){
//         windowsum+=arr[i];
//     }
//     int sum = windowsum;

//     for(int i=k;i<n;i++){
//         windowsum +=arr[i]-arr[i-k];
//         sum = max(sum,windowsum);
//     }

//     cout<<"The maximum subarry sum : "<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {4, 2, 2, 7, 8, 1, 2, 8, 10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int left = 0;
//     int sum = 0;
//     int minLength = INT_MAX;
//     int target = 15;


//     for(int right=0;right<n;right++){
//         sum +=arr[right];

//         int currentLength = right - left + 1;
//         minLength = min(minLength, currentLength);

//         while(sum >= target){

//             sum -=arr[left];
//             left++;
//         }
//     }

//     if(minLength == INT_MAX)
//         cout << 0;
//     else
//         cout << "Smallest length: " << minLength;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 1, 3, 4, 2, 3};
    int sum =0;
    int n =sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    for(int right=0;right<n;right++){
        sum += arr[right];
        while()
    }
    


}