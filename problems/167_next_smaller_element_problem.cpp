#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> arr ={6,8,0,1,3};
    vector<int> ans(arr.size(),0);
    stack<int> s;

    for(int i =arr.size()-1;i>=0;i--){
        while(!s.empty()&& arr[s.top()] <=arr[i]) {
            s.pop();
        }
        ans[i]=(s.empty()) ? -1 :arr[s.top()];
        s.push(i);
    }
    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}
