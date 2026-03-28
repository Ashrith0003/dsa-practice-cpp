#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int arr[] ={1,8,6,2,5,4,8,3,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = n-1;
    int max_water =0;
    while(left < right){
        int sum = arr[left]+arr[right]; //water problem//important //
        if(max_water > sum){
            max_water = sum;
        }else if(arr[left] > arr[right]){
            right++;
        }else{
            left++;
        }

    }
    cout<<max_water;
    return 0;
}
