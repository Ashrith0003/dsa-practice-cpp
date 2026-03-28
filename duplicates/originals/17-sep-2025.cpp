// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// int main(){
//     Node*head=new Node(100);
//     Node*first=new Node(200);
//     Node*second=new Node(300);
//     Node*third=new Node(400);
//     Node*fourth=new Node(500);
//     head->next = first;
//     first->next = second;
//     second ->next = third;
//     third ->next = fourth;
//     fourth ->next = NULL;
//     Node*temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
    
// }

// #include<iostream>
// using namespace std;
// // int BinarySearchNonRecersive(int arr[],int target,int size){
// //     int start = 0;
// //     int end = size-1;
// //     while(start <= end ){
// //         int mid = start +(end - start)/2;
// //         if(arr[mid] == target){
// //             return mid ;
// //         }else if(arr[mid] < target){
// //             start = mid +1 ;
// //         }else {
// //             end = mid - 1;
// //         }   
// //     }

// //     return -1;
// // };

// int BinarySearchRecersive(int arr[],int target,int start,int end){
//     while(start > end ){
//         return -1;
//     }
//         int mid = start +(end - start)/2;
//         if(arr[mid] == target){
//             return mid ;
//         }else if(arr[mid] < target){
//             return BinarySearchRecersive(arr,target,mid+1,end);
//         }else {
//            return BinarySearchRecersive(arr,target,start,mid-1);
//         }   
    
//     return -1;
// };

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int target;
//     cout<< "enter the target :";
//     cin>> target;
//     // cout << BinarySearchNonRecersive(arr,target,size);
//     cout << BinarySearchRecersive(arr,target,0,size-1);
// }


#include<iostream>
using namespace std;

int arr[8] ={7,6,5,4,2,10,20,13}; 

int get_max(int arr[], int n) {
    int max_1 = arr[0];   // local max
    for(int i=1; i<n; i++) {
        if(arr[i] > max_1) {
            max_1 = arr[i];
        }
    }
    return max_1;
}

void swap(int &a, int &b) {   // use reference to actually swap
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int n) {
    for(int pass=n; pass>1; pass--) {
        // find index of maximum element in arr[0..pass-1]
        int maxIndex = 0;
        for(int i=1; i<pass; i++) {
            if(arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        swap(arr[maxIndex], arr[pass-1]);
    }
}

void display(int n ,int arr[]) {
    for(int i=0; i<n; i++) {
       cout << " " << arr[i];
   }
   cout << endl;
}

int main() {
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(n);
    display(n, arr);
}