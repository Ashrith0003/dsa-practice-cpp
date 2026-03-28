#include<iostream>
using namespace std;
class bank{
private:
    int balance;
public:
    bank(int r){
        balance = r;
    }

    int deposit(int amt){
        if(amt > 0){
            balance +=amt;
        }
    }

    int withdaraw(int amt){
        if(amt <= balance){
            balance -= amt;
        }
    }

    int getbalance(){
        return balance;
    }
};


int main(){
    bank s1(1000);
    s1.deposit(500);
    cout<<"The balance is :"<<s1.getbalance()<<endl;
    s1.withdaraw(1000);
    cout<<"The balance is :"<<s1.getbalance()<<endl;
    return 0;
}
