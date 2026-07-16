#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[]={1,1,1,2,2,3};
    map<int,int> mpp;
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}