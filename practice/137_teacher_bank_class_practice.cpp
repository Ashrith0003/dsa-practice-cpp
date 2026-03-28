#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties/ attributes
private:
    float salary;
public:
    string name;
    string dept;
    string subject;

    //constructor initialisation//
    // non-parameterized constructor//
    // Teacher(){
    //     dept = "computer science";
    // }
   // parameterized constructor//
    Teacher(string name ,string dept,string subject,double salary){
    this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        
    }

    
    //methods/ member function/
    void changedept(string newdept){
        dept = newdept;
    }

    // getting private value in the main function//
    //setter//

    void setsalary(double s){
        salary = s;
    }
    //getter//

    double getsalary(){
        return salary;
    }

    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"department :"<<dept<<endl;
        cout<<"subject :"<<subject<<endl;
        cout<<"salary :"<<salary<<endl;
    }
};

class bank{
public:
    // constructor //
    bank(){
        cout<<"hi,i am constructor\n";
    }
    string username;
    string account_id;
private:
    double banlance;
    string password;

};

int main(){
    // objects//
    Teacher t1("Ashrith","computer science","c++",200000);
    Teacher t2("Thanush","electrical","BEE",200000);
    t1.getinfo();
    cout<<endl;
    t2.getinfo();
    // bank x1;
    return 0; 
 

}