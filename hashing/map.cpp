#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[]={1,2,1,2,1,4,5,6,7,5};
    int n =sizeof(arr)/sizeof(arr[0]);

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
cout << "Frequency of 1 = " << mpp[1] << endl;
cout << "Frequency of 2 = " << mpp[2] << endl;
cout << "Frequency of 3 = " << mpp[3] << endl;
cout << "Frequency of 5 = " << mpp[5] << endl;
return 0;
}

