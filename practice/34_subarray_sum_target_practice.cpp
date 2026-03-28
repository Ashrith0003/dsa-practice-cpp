#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int nums[6]={2,3,1,2,4,3};
    int target = 6;
    int sum =0;
    int left = 0;
    int right = 7;
    for(int i=left;i<right;i++){
        sum = sum+nums[i];
        if(sum >= target){
            right--;
            sum=sum - nums[right];
        }else{
            cout<<sum;
        }
    }
    return 0;
}
