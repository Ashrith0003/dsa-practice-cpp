#include<iostream>
using namespace std;
class employee{
private:
    string name;
    int id;
    float salary;
public:
    void setvalue(string name,int id,float salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    };

       void display() {
        cout << "Name   : " << name << endl;
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "-------------------" << endl;
    }
};

int main(){
    employee emp[3];
    emp[0].setvalue("ashrith",01,50000.25);
    emp[1].setvalue("ashrith",01,50000.25);
    emp[2].setvalue("ashrith",01,50000.25);

    cout << "Employee Details:" << endl;
    for(int i = 0; i < 3; i++) {
        emp[i].display();
    }
    return 0;
};
