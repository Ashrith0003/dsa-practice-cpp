#include<iostream>
using namespace std;
class bank {
private:
    int balance;
public:
    bank(int data){
        if(data>0){
            balance = data;
        }else{
            balance=0;
        }
    }

    int getbalance(){
        return balance;
    }

};
int main(){
    bank s1(-20);
    cout<<s1.getbalance()<<endl;
    return 0;
}
