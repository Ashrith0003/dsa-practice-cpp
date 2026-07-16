// #include<iostream>
// using namespace std;

// class Animal{
// public:
//     string name;
//     void eat(){
//         cout<<name<<" is eating\n";
//     }
// };

// class Dog :public Animal{
// public:
//     void bark(){
//         cout<<name<<" say fucking \n ";
//     }
// };

// int main(){
//     Dog d;
//     d.name = "Akthar";
//     d.eat();
//     d.bark();
//     return 0;
// }

#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
    person (string name, int age):name(name),age(age){}
    virtual void info(string s){
        cout<<name<<" is "<< s<<endl;
        cout <<" age : "<<age<<endl;
    }
};

class student : public person{
    char grade;
    public:
    student(string name,int age, char grade):person(name,age),grade(grade){}
    void info(string s="student") override{
        person::info(s);
        cout<<"grades are : "<<grade<<endl; 
    }
};

class teacher : public person{
    string subject;
    public:
    teacher(string name,int age,string subject):person(name,age),subject(subject){}
    void info(string s= "teacher") override{
        person::info(s);
        cout<<"subject name :"<<subject<<endl;
        
    }
};


int main(){
    person p("Akthar", 20);
    student s("pop",20,'A');
    s.info();
    teacher t("Burra",45,"OOPLU and DSA");
    t.info();
    return 0;
}