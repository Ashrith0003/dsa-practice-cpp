#include<iostream>
using namespace std;
struct student{
    string name;
    int rollno;
};

class studentclass{
    string name;
    int rollno;
};

int main(){
    student s1;
    s1.name = "Ashrith";
    s1.rollno = 40;

    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;

    // studentclass s2;
    // s2.name = "Ashrith";
    // s2.rollno = 10;
    // cout<<s2.name<<endl;
    // cout<<s2.rollno<<endl;

    return 0;
}