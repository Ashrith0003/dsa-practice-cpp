#include<iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    void setvalue(string name,int age){
        this ->name = name;
        this ->age = age;
    }
    string getName() { return name; }
    int getAge()     { return age; }
};

int main(){
    student s1;
    student *ptr = &s1;
    ptr->setvalue("Ashrith",19);
    cout<<ptr->getName()<<endl;
    cout<<ptr->getAge()<<endl;
    return 0;
};
