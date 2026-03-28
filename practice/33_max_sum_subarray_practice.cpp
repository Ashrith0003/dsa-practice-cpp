#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int nums[6] = {2,1,5,1,3,2};
    int sum=0;
    int k =3;
    for(int i=0;i<k;i++){
        sum=sum+nums[i];
    }
    int maxsum =sum;
    for(int i=k;i<6;i++){
        sum = sum -nums[i-k]+nums[i];
        maxsum =max(maxsum,sum);
    }
    cout<<"The max sum :"<<maxsum;
    return 0;
}
