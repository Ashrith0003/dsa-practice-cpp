#include<iostream>
using  namespace std;

class Employee{
private:
    string name;
    int id ;
    float salary;
public:

    void setdetails(string name ,int id,float salary){
        this->name =name;
        this->id = id;
        this->salary = salary;
    }

    void display(){
        cout<<" Name :"<<name<<endl;
        count<<"ID :"<<id<<endl;
    }
}
