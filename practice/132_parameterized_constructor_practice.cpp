#include<iostream>
using namespace std;
class car{
private:
    string brand;
    string model;
public:
    car(string barnd,string model){
       this->brand = brand;
        this->model = model;
    }
    void display(){
        cout<<brand<<endl;
        cout<<model<<endl;
    }
};
int main(){
    car c1("BMW","X5");
    c1.display();
    return 0;
}
