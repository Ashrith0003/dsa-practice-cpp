            //operator overloding //
#include<iostream>
#include<string>
using namespace std;
class student{
private:
    int marks;
public:
    string name;
    int rollno;
    string dept;

 student(){
    dept ="CSE";
}
void setMarks(int marks){   // add the value to the marks which is in privite //
    this->marks = marks;
}

int getMarks(){
    return marks;
}

student operator + (student s){   
    student temp;                   //cerate temp object //
    temp.setMarks(this->marks+s.marks);    //temp.setmarks(value); 
    return temp;
}
};


int main(){
    student t1;
    student t2;
    student t4;
    t4.setMarks(40);
    t1.setMarks(70);
    t2.setMarks(70);
    student t3 = t1 + t2 + t4;
    cout << "Total Marks: " << t3.getMarks();
    return 0;
}
