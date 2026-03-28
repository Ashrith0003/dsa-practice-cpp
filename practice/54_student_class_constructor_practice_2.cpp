#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    int rollNo;
    student(string a,int b,int c){
        name = a;
        age = b;
        rollNo = c;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<rollNo<<" "<<endl;
    }

};
int main(){
    student s1("Ashrith",19,241501);
    s1.display();
    return 0;
}
