moving zeros to end //
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,1,0,3,12};
    int n =sizeof(arr)/sizeof(arr[0]);
    int left =0;
    for(int right =0;right<n;right++){
        if(arr[right]!=0){
            swap(arr[left],arr[right]);
            left++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
