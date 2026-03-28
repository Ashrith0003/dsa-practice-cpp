problem - 8//
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int high = n-1;
    int low = 0;
    int ans = arr[0];
    int ans2 = 0;        

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){   
                ans = arr[low];
                ans2 = low;
            }
            low = mid+1;
        }else{
            if(arr[mid] < ans){   
                ans = arr[mid];
                ans2 = mid;
            }
            high = mid-1;
        }
    }

    cout << "Minimum element: " << ans  << endl;
    cout << "Number of rotations: " << ans2 << endl;
    return 0;
}
