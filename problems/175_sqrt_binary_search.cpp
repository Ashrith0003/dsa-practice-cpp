
problem number 2//
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the x value : ";
    cin>>x;
    if(x<2){
        cout<<"The answer is :"<<x; 
    }else{
    int high = x;
    int low =0;
    int ans =0;
    while(low<=high){
        int mid = low+(high - low)/2;
        if(mid <= x/mid){
            ans = mid;
            low = mid+1;
        }else{
            high =mid-1;
        }
    }
    cout<<"The answer is : "<<ans;
    }
}
