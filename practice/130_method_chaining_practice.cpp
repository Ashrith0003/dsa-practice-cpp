#include<iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    student& setName(string name) {
    this->name = name;
    return *this;   
}

   student& setAge(int age) {
    this->age = age;
    return *this;   
}
 
student&display(){
    cout<<name<<endl;
    cout<<age<<endl;
}
};
int main(){
    student s1;
    s1.setName("Ashrith").setAge(19).display();
    return 0;

}
