#include<iostream>
using namespace std;
class car{
private:
    string brand;
    string model;
public:
    car(){
        brand ="Toyota";
        model ="Corolla";
    }
    void display(){
        cout<<brand<<endl;
        cout<<model<<endl;
    }
};
int main(){
    car c1;
    c1.display();
    return 0;
}
