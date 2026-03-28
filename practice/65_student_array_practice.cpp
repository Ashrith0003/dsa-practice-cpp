#include<iostream>
using namespace std;
class student{
private:
    int arr[5];
public:
    int input(){
        cout<<"enter the elements:";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }

    void output(){
        cout << "Array elements are: ";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    student s1;
    s1.input();
    s1.output();
    return 0;
