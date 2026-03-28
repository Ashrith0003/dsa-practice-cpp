#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    int rollNo;

    void display(){
        cout<<name<<" "<<age<<" "<<rollNo<<" "<<endl;
    }
};

int main(){
    student s1;
    s1.name = "Ashrith";
    s1.age = 19;
    s1.rollNo = 241501;
    s1.display();
    return 0;
}
