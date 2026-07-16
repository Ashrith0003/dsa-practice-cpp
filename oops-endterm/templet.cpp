// // #include<iostream>
// // using namespace std;
// // template<typename T>

// // void bubblesort(T arr[],int n){
// //     for(int i=0;i<n;i++){
// //         for(int j= 0;j <n-i-1;j++){
// //             if(arr[j] >arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// // }

// // #include<iostream>
// // using namespace std;
// // template<typename T>

// // T findmin(T arr[],int n){
// //     T min_element = arr[0];
// //     for(int i =1;i<n;i++){
// //         if(arr[i] < min_element){
// //             min_element = arr[i];
// //         }
// //     }
// //     return min_element;
// // }

// #include<iostream>
// using namespace std;
// template<typename T>

// T sum_elements(T arr[],int n){
//     T sum = 0;
//     for(int i=0;i<n;i++){
//         sum =sum+arr[i];
//     }
//     return sum;
// };

// template<typename T>
// T liner_search(T arr[],T key,int n){
//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
// };

// template<typename T>


// int main() {
//     int arr[] = {5, 2, 9, 1, 6};
//     int n = 5;

//     // bubblesort(arr, n);
//     // cout<<"the sum of all element : "<<sum_elements(arr,5);
//     cout<<liner_search(arr,5,5);

//     // cout << "Sorted array: ";
//     // for (int i = 0; i < n; i++) {
//     //     cout << arr[i] << " ";
//     // }

//     return 0;
// }