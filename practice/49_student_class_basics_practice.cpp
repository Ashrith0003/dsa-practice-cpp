#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class student{
public:
    string name;
    int age;
    int rollnumber;
    int marks;

    void display(){
        cout<<name<<" "<<age<<" "<<rollnumber<<" "<<endl;
    }                                                                        //basics of oops and idea of the class and how to use the class//
};

int main(){
    student s1;
    s1.name = "Ashrith";
    s1.marks=40;
    s1.age = 19;
    s1.rollnumber = 241501;
    s1.display();
    return 0;

}
