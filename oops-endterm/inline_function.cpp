#include<iostream>
using namespace std;

class student{
public:
    int marks=10;



    student(){

    }

    student(int a,int b){

    }

    student(&s1){
        
    }

    inline int square(){
        return marks*marks;
    }

    void display(){
        cout<<square()<<endl;
    }

    void swap(int &a ,int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    int ashrith(int a){
        return 1;
    }

    int ashrith(int a,int b){
        return 2;
    }

    int ashrith(int a,float b){
        return 3;
    }
};

int main(){
    student s;

    s.display();
    return 0;
}