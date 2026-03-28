#include<iostream>
using namespace std;
class calculator{
public:
    int a;
    int b;
    calculator(int r,int t){
        a = r;
        b = t;
    }

    int sum(){
        return a+b;
    }

    int sub(){
        return a-b;
    }
};

int main(){
    calculator s1(10,20);
    cout<<"The sum is:"<<s1.sum()<<endl;
    cout<<"The sub is:"<<s1.sub()<<endl;
    return 0;
}