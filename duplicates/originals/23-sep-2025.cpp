// #include<iostream>
// using namespace std;
// void display(int n ,int arr[]){
//     for(int i=0;i<n;i++){
//         cout<<" "<<arr[i];
//     }
// }

// void insertion_sort(int n ,int arr[]) {
//      for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i-1;
//         while(j >=0 && arr[j] > key){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
//     display(n,arr);
// }

// int main(){
//     int arr[8]={7,6,5,4,2,10,20,13};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     insertion_sort(n,arr);
// }

#include<iostream>
using namespace std;
int arr[8] ={7,6,5,4,2,10,20,13}; 
int get_max(int arr[],int n){
    int max_1 =arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]> max_1){
            max_1 = arr[i];
        }
    }
    return max_1;
}
void swap(int &largest_element ,int &value){
    int temp =largest_element;
    largest_element = value ;
    value = temp;
}

void selection_sort(int n){
    for(int pass=1;pass<n-pass;pass++){
        int largest_element = get_max(0,n-pass);
        swap(largest_element,n-pass);
    }
}
void display(int n ,int arr[]){
    for(int i=0;i<n;i++){
       cout<<" "<<arr[i];
   }
 }

int main(){
    int n = sizeof(arr)/sizeof(arr[0]);
    get_max(arr,n);
    selection_sort(n);
    display(n,arr);

}