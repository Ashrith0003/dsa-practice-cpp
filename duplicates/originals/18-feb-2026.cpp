//             //operator overloding //
// #include<iostream>
// #include<string>
// using namespace std;
// class student{
// private:
//     int marks;
// public:
//     string name;
//     int rollno;
//     string dept;

//  student(){
//     dept ="CSE";
// }
// void setMarks(int marks){   // add the value to the marks which is in privite //
//     this->marks = marks;
// }

// int getMarks(){
//     return marks;
// }

// student operator + (student s){   
//     student temp;                   //cerate temp object //
//     temp.setMarks(this->marks+s.marks);    //temp.setmarks(value); 
//     return temp;
// }
// };


// int main(){
//     student t1;
//     student t2;
//     student t4;
//     t4.setMarks(40);
//     t1.setMarks(70);
//     t2.setMarks(70);
//     student t3 = t1 + t2 + t4;
//     cout << "Total Marks: " << t3.getMarks();
//     return 0;
// }



                //function overloading//
// #include<iostream>
// using namespace std;

// class Demo {
// public:
//     void add(int a, int b) {
//         cout << a + b << endl;
//     }

//     void add(int a, int b, int c) {
//         cout << a + b + c << endl;
//     }
// };

// int main() {
//     Demo d;
//     d.add(2,3);      
//     d.add(2,3,4);
// return 0;    
// }

// #include<iostream>
// using namespace std;

// class Parent {
// public:
//     virtual void show() {
//         cout << "Parent function" << endl;
//     }
// };

// class Child : public Parent {
// public:
//     void show() {
//         cout << "Child function" << endl;
//     }
// };

// int main() {
//     Child c;
//     c.show(); // calls child function
//     c.Parent::show();  //class parent function//ajsdd
// }


// #include<iostream>
// using namespace std;
// class shape{
// private:
//     int result;
// public:
//     void Area(int l,int b){
//         result = l*b;
//     }

//     void Area(int r){
//         result = (22/7)*r*r;
//     }

//     int getresult(){
//         return result;
//     }
// };

// int main(){
//     shape s1;
//     s1.Area(10,20);
//     cout<<s1.getresult()<<endl;
//     s1.Area(40);
//     cout<<s1.getresult()<<endl;
//     return 0;
// }

