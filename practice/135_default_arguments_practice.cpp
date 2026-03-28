#include<iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    student(string name ="Ashrith",int age =19){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main(){
    student s1;
    student s2("thanush",20);
    s1.display();
    s2.display();
    return 0;
}
