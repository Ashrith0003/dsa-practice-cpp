#include<iostream>
using namespace std;
class bank{
private:
    int balance;
public:
    bank(int data){
        balance = data;
    }

    int getbalance(){
        return balance;
    }

};
int main(){
    bank s1(5000);
    cout<<s1.getbalance();
    return 0;
}
