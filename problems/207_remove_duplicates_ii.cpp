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


