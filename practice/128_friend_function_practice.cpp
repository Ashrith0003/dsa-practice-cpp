#include<iostream>
using namespace std;
class Cylinder;
class Box{
private:
    int length;
    int breadth;
    int height;
public:
    friend void compare(Box b, Cylinder c);
    void setter(int length,int height,int breadth){
        this->height = height;
        this->length =length;
        this->breadth =breadth;
    }

};

class Cylinder{
private:
    int radius;
    int height;
public:
    friend void compare(Box b, Cylinder c);
    void setter(int radius,int height){
        this->height = height;
        this->radius =radius;
    }
};

 void compare(Box b,Cylinder c){
        float boxVol = b.length * b.breadth * b.height;
        float cylVol = 3.14 * c.radius * c.radius * c.height;
        if(boxVol > cylVol){
            cout<<boxVol;
        }else{
            cout<<cylVol;
        }
}
int main() {
    Box b1;
    b1.setter(10, 5, 4);

    Cylinder c1;
    c1.setter(3, 7);

    compare(b1, c1);
    return 0;
}
