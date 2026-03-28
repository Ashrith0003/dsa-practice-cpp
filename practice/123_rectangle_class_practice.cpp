#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    void setvalue(int lenght,int breadth){
        this->breadth = breadth;
        this->length = lenght;
    }
    int calculater_area(){
        return length*breadth;
    }

     int calculate_perimeter();
};

int Rectangle::calculate_perimeter(){
    return 2*(length+breadth);
}


int main(){
    Rectangle r1;
    r1.setvalue(10, 5);
    cout << "Area : " << r1.calculater_area() << endl;
    cout << "Perimeter : " << r1.calculate_perimeter() << endl;
    return 0;
} 
