#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>> n;
    int prev = 1;
    int prev2 = 0;

    for(int i =2;i<=n;i++){
        int current = prev+prev2;
        
        prev2 = prev;
        prev = current;
    }
    cout<<prev;
return 0;
}