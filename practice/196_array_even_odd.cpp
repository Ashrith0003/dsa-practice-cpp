#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,10,40,100,20,700,500};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0 ;
    int odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"the even :"<<even<<endl;
    cout<<"the odd :"<<odd;
    return 0;
}
