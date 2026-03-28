#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,4,6,8,9};
int n =sizeof(arr)/sizeof(arr[0]);
int target = 10;
int right = n-1;
int left = 0;
bool found = false;
while(left  < right){
    int sum = arr[left]+arr[right];
    if(sum ==target){
        cout<<left<<","<<right;
        found =true;
        break;
    }else if(sum > target){
        right--;
    }else{
        left++;
    }
}
if(!found){
    cout<<"No pair found ";
}
return 0;

}
