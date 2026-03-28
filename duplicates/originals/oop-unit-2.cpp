// #include<iostream>
// using namespace std;
// struct student {  
//     string name; //defult public//
// };

// class student_class {
//     string name;    //defult private//
//     int rollnumber;
// };

// int main(){
//     student s1;
//     s1.name ="Ashrith";

//     student_class s2;
//     s2.name ="Ashrith";
//     s2.rollnumber = 241501;

//     return 0;
// }
   //problem -2//
// #include<iostream>
// using namespace std;
// class Book{
// private:
//     string title;
//     string author;
//     int price;
// public:
//     void setdetails(string title,string author,int price){
//         this->title = title;
//         this->author = author;
//         this->price = price;
//     }

//     void display(){
//         cout<<"The title name :"<<title<<endl;
//         cout<<"The Author :"<<author<<endl;
//         cout<<"The price : "<<price<<endl;
//     }
// };

// int main(){
//     Book s1;
//     s1.setdetails("romantice","Ashrith",900);
//     s1.display();
//     return 0;
// }


    //problem -3//
// #include<iostream>
// using namespace std;
// class Rectangle{
// private:
//     int length;
//     int breadth;
// public:
//     void setvalue(int lenght,int breadth){
//         this->breadth = breadth;
//         this->length = lenght;
//     }
//     int calculater_area(){
//         return length*breadth;
//     }

//      int calculate_perimeter();
// };

// int Rectangle::calculate_perimeter(){
//     return 2*(length+breadth);
// }


// int main(){
//     Rectangle r1;
//     r1.setvalue(10, 5);
//     cout << "Area : " << r1.calculater_area() << endl;
//     cout << "Perimeter : " << r1.calculate_perimeter() << endl;
//     return 0;
// } 

//problem -4//
// #include<iostream>
// using namespace std;
// class Marks{
// private:
//     int score[5];
// public:
//     void setvalue(){
//         for(int i=0;i<5;i++){
//             cout<<"enter the marks of "<< i <<"student"<<endl;
//             cin>>score[i];
//         }
//     }

//     float calculateAvg(){
//         int sum = 0;
//         float avg = 0;
//         for(int i=0;i<5;i++){
//             sum +=score[i];
//         }
//         avg =  sum/5.0;
//         return avg;
//     }
// };

// int main(){
//     Marks s1;
//     s1.setvalue();
//     cout<<s1.calculateAvg();
//     return 0;
// }

//problem 5//

// #include<iostream>
// using namespace std;
// class employee{
// private:
//     string name;
//     int id;
//     float salary;
// public:
//     void setvalue(string name,int id,float salary){
//         this->name = name;
//         this->id = id;
//         this->salary = salary;
//     };

//        void display() {
//         cout << "Name   : " << name << endl;
//         cout << "ID     : " << id << endl;
//         cout << "Salary : " << salary << endl;
//         cout << "-------------------" << endl;
//     }
// };

// int main(){
//     employee emp[3];
//     emp[0].setvalue("ashrith",01,50000.25);
//     emp[1].setvalue("ashrith",01,50000.25);
//     emp[2].setvalue("ashrith",01,50000.25);

//     cout << "Employee Details:" << endl;
//     for(int i = 0; i < 3; i++) {
//         emp[i].display();
//     }
//     return 0;
// };

//     //problem - 6//
// #include<iostream>
// using namespace std;

// class Counter {
// private:
//     static int count;  
// public:
//     Counter() {
//         count++;
//         cout << "Object created! Count = " << count << endl;
//     }

//     static void displayCount() {
//         cout << "Total objects created : " << count << endl;
//     }
// };
// int Counter::count = 0;

// int main() {
//     Counter::displayCount();  // count = 0

//     Counter c1;               // count = 1
//     Counter c2;               // count = 2
//     Counter c3;               // count = 3

//     Counter::displayCount();  // count = 3

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Complex {
// private:
//     int real;
//     int imaginary;
// public:
//     void setdetails(int real, int imaginary) {
//         this->real = real;
//         this->imaginary = imaginary;
//     }

//     void add(Complex c2) {
//         int sumReal      = real + c2.real;
//         int sumImaginary = imaginary + c2.imaginary;
//         cout << sumReal << " + " << sumImaginary << "i" << endl;
//     }

//     void display() {
//         cout << real << " + " << imaginary << "i" << endl;
//     }
// };

// int main() {
//     Complex c1, c2;

//     c1.setdetails(3, 2);
//     c2.setdetails(1, 4);

//     cout << "C1 = "; c1.display();
//     cout << "C2 = "; c2.display();

//     cout << "Sum = "; c1.add(c2);  // c2 is passed as argument

//     return 0;
// }

  //problem-9//
// #include<iostream>
// using namespace std;
// class Cylinder;
// class Box{
// private:
//     int length;
//     int breadth;
//     int height;
// public:
//     friend void compare(Box b, Cylinder c);
//     void setter(int length,int height,int breadth){
//         this->height = height;
//         this->length =length;
//         this->breadth =breadth;
//     }

// };

// class Cylinder{
// private:
//     int radius;
//     int height;
// public:
//     friend void compare(Box b, Cylinder c);
//     void setter(int radius,int height){
//         this->height = height;
//         this->radius =radius;
//     }
// };

//  void compare(Box b,Cylinder c){
//         float boxVol = b.length * b.breadth * b.height;
//         float cylVol = 3.14 * c.radius * c.radius * c.height;
//         if(boxVol > cylVol){
//             cout<<boxVol;
//         }else{
//             cout<<cylVol;
//         }
// }
// int main() {
//     Box b1;
//     b1.setter(10, 5, 4);

//     Cylinder c1;
//     c1.setter(3, 7);

//     compare(b1, c1);
//     return 0;
// }

//problem 10//
// #include<iostream>
// using namespace std;
// class student{
// private:
//     string name;
//     int age;
// public:
//     void setvalue(string name,int age){
//         this ->name = name;
//         this ->age = age;
//     }
//     string getName() { return name; }
//     int getAge()     { return age; }
// };

// int main(){
//     student s1;
//     student *ptr = &s1;
//     ptr->setvalue("Ashrith",19);
//     cout<<ptr->getName()<<endl;
//     cout<<ptr->getAge()<<endl;
//     return 0;
// };

//problem -11//
// #include<iostream>
// using namespace std;
// class student{
// private:
//     string name;
//     int age;
// public:
//     student& setName(string name) {
//     this->name = name;
//     return *this;   
// }

//    student& setAge(int age) {
//     this->age = age;
//     return *this;   
// }
 
// student&display(){
//     cout<<name<<endl;
//     cout<<age<<endl;
// }
// };
// int main(){
//     student s1;
//     s1.setName("Ashrith").setAge(19).display();
//     return 0;

// }

// #include<iostream>
// using namespace std;
// class car{
// private:
//     string brand;
//     string model;
// public:
//     car(){
//         brand ="Toyota";
//         model ="Corolla";
//     }
//     void display(){
//         cout<<brand<<endl;
//         cout<<model<<endl;
//     }
// };
// int main(){
//     car c1;
//     c1.display();
//     return 0;
// }

//problem -13//
// #include<iostream>
// using namespace std;
// class car{
// private:
//     string brand;
//     string model;
// public:
//     car(string barnd,string model){
//        this->brand = brand;
//         this->model = model;
//     }
//     void display(){
//         cout<<brand<<endl;
//         cout<<model<<endl;
//     }
// };
// int main(){
//     car c1("BMW","X5");
//     c1.display();
//     return 0;
// }

//problem -14//
// #include<iostream>
// using namespace std;
// class car{
// private:
//     string brand;
//     string model;
// public:
//     car(string brand,string model){
//        this->brand = brand;
//         this->model = model;
//     }
//     car(car &c){
//         this->brand = c.brand;
//         this->model = c.model;

//     }
//     void display(){
//         cout<<brand<<endl;
//         cout<<model<<endl;
//     }
// };
// int main(){
//     car c1("BMW","X5");
//     car c2(c1);
//     c1.display();
//     c2.display();
//     return 0;
// }

//problem -15//
// #include<iostream>
// using namespace std;
// class BankAccout{
// private:
//     int balance;
//     string accountHolder;
// public:
//     BankAccout(){
//         balance =0;
//     }

//     BankAccout( string accountHolder,int balance){
//         this->accountHolder = accountHolder;
//         this->balance = balance;
//     }

//     BankAccout(BankAccout &c){
//         this->accountHolder = c.accountHolder;
//         this->balance = c.balance;
//     }

//     void display(){
//         cout<<accountHolder<<endl;
//         cout<<balance<<endl;
//     }
// };
// int main(){
//     BankAccout b1;
//     BankAccout b2("Ashrith",70000);
//     BankAccout b3(b2);
//     b1.display();
//     b2.display();
//     b3.display();
//     return 0;
// }

//problem -16//
// #include<iostream>
// using namespace std;
// class student{
// private:
//     string name;
//     int age;
// public:
//     student(string name ="Ashrith",int age =19){
//         this->name = name;
//         this->age = age;
//     }
//     void display(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//     }
// };
// int main(){
//     student s1;
//     student s2("thanush",20);
//     s1.display();
//     s2.display();
//     return 0;
// }
//problem -17//
#include<iostream>
using namespace std;
class matrix{
private:
    int rows;
    int colums;
public:
    matrix(int rows,int colums){
        this->rows = rows;
        this->colums = colums;
    }
}