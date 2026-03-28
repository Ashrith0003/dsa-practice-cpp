#include<iostream>
using namespace std;
class BankAccout{
private:
    int balance;
    string accountHolder;
public:
    BankAccout(){
        balance =0;
    }

    BankAccout( string accountHolder,int balance){
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    BankAccout(BankAccout &c){
        this->accountHolder = c.accountHolder;
        this->balance = c.balance;
    }

    void display(){
        cout<<accountHolder<<endl;
        cout<<balance<<endl;
    }
};
int main(){
    BankAccout b1;
    BankAccout b2("Ashrith",70000);
    BankAccout b3(b2);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
