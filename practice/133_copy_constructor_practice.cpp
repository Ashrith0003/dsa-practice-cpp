#include<iostream>
using namespace std;
class car{
private:
    string brand;
    string model;
public:
    car(string brand,string model){
       this->brand = brand;
        this->model = model;
    }
    car(car &c){
        this->brand = c.brand;
        this->model = c.model;

    }
    void display(){
        cout<<brand<<endl;
        cout<<model<<endl;
    }
};
int main(){
    car c1("BMW","X5");
    car c2(c1);
    c1.display();
    c2.display();
    return 0;
}
