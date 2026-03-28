#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int sum =0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }

    int maxsum =  sum;
    for(int i=k;i<6;i++){
        sum=sum-arr[i-k]+arr[i];
        maxsum=max(maxsum,sum);
    }
    double average = (double)maxsum/k;
    cout<<"The max average :"<<average;
    return 0;
}
