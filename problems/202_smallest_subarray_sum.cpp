#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {4, 2, 2, 7, 8, 1, 2, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int sum = 0;
    int minLength = INT_MAX;
    int target = 15;


    for(int right=0;right<n;right++){
        sum +=arr[right];

        int currentLength = right - left + 1;
        minLength = min(minLength, currentLength);

        while(sum >= target){

            sum -=arr[left];
            left++;
        }
    }

    if(minLength == INT_MAX)
        cout << 0;
    else
        cout << "Smallest length: " << minLength;

    return 0;
}
