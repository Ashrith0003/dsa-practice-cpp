// #include<iostream>
// #include<algorithm>
// #include <climits>
// using namespace std;
// int main(){
//     int sum =0;
//     int maxsum=INT_MIN;
//     int left =0;
//     int nums[7]={10,2,3,8,5,7,6};
//     int n=7;
//     int k=3;
//     for(int right=0;right<n;right++){  fixed window size //
//         sum=sum+nums[right];

//         if(right-left + 1  == k){
//             maxsum=max(sum,maxsum);
//             sum=sum-nums[left];
//             left++;
//         }
//     }
//     cout<<"the maximum sum is :"<<maxsum;
//     return 0;
// }
