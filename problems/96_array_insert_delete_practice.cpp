// #include<iostream>
// using namespace std;
// int capacity = 10;
// int n_elements = 0;
// int arr[10];
// bool insertion(int iteam){
//     if(capacity == n_elements){
//         return false;
//     }
//     arr[capacity-n_elements-1] = iteam;
//     n_elements++;
//     return true;
// }

// bool deletion(int iteam){
//     if(n_elements == 0){
//         return false;
//     }
//     int found_index =-1;
//     int start = capacity-n_elements;
//     for(int i=start;i<capacity-1;i++){
//         if(arr[i]== iteam){
//             found_index = i;
//             break;
//         }
//     }
//     if(found_index == -1){
//         return false;
//     }
//     for(int i=found_index;i < capacity-n_elements;i++){
//         arr[i]=arr[i-1];
//     }
//     n_elements--;
//     return true;
    
// }
// void display(){
//     for(int i=capacity-1;i>=capacity-n_elements;i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     insertion(10);
//     insertion(20);
//     insertion(30);
//     insertion(40);
//     insertion(50);
//     display();
//     deletion(30);
//     deletion(40);
//     deletion(10);
//     display();
// }
