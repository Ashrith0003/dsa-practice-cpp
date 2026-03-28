#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int windowsum =0;
    int k =3;
    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }
    int sum = windowsum;

    for(int i=k;i<n;i++){
        windowsum +=arr[i]-arr[i-k];
        sum = max(sum,windowsum);
    }

    cout<<"The maximum subarry sum : "<<sum<<endl;
    return 0;
}
