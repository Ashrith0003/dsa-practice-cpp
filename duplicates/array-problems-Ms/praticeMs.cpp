// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,10,40,100,20,700,500};
//     int largest =arr[0] ;
//     for(int i=0;i<10;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     cout<<"the max number :"<<largest;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,10,40,100,20,700,500};
//     int lowest =arr[0] ;
//     for(int i=1;i<7;i++){
//         if(arr[i] <lowest){
//             lowest = arr[i];
//         }
//     }
//     cout<<"the min number :"<<lowest;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,10,40,100,20,700,500};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0 ;
//     for(int i=1;i<n;i++){
//         sum +=arr[i];
//     }
//     cout<<"the sum  :"<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,10,40,100,20,700,500};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int even = 0 ;
//     int odd = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 == 0){
//             even++;
//         }else{
//             odd++;
//         }
//     }
//     cout<<"the even :"<<even<<endl;
//     cout<<"the odd :"<<odd;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,10,40,100,20,700,500};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,10,40,100,20,700,500};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key;
//     bool found = false;
//     cout<<"enter the key :";
//     cin>>key;
//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             cout<<" the element is at "<< i <<" and "<<arr[i];
//             found = true;
//             break;
//         }
//     }
//       if(!found){
//         cout<<"Element not found";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,10,40,100,20,700,500};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int first_largest =arr[0];
//     int second_largest;
//     for(int i=1;i<n;i++){
//         if(arr[i]>first_largest){
//             second_largest=first_largest;
//             first_largest=arr[i];
//         }
//         else if(arr[i] > second_largest && arr[i] != first_largest){
//             second_largest = arr[i];
//         }
//     }
//     cout<<"the second largest :"<<second_largest;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int n = sizeof(arr) / sizeof(arr[0]);
    

}