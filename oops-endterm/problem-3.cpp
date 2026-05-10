#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
public:
    void setvalue(int length,int breadth){
        this->breadth = breadth;
        this->length = length;
    }

    int calulate_area(){
        return length*breadth;
    }

    int calculate_praimeter();
};

int rectangle::calculate_praimeter(){
    return 2*(length*breadth);
}

int main(){
    rectangle r1;
    r1.setvalue(10,15);
    cout<<"Area :"<<r1.calulate_area()<<endl;
    cout<<"perimeter: "<<r1.calculate_praimeter()<<endl;
    return 0;
}


