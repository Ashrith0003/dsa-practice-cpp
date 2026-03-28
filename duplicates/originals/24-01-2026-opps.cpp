// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;

// class student{
// public:
//     string name;
//     int age;
//     int rollnumber;
//     int marks;

//     void display(){
//         cout<<name<<" "<<age<<" "<<rollnumber<<" "<<endl;
//     }                                                                        //basics of oops and idea of the class and how to use the class//
// };

// int main(){
//     student s1;
//     s1.name = "Ashrith";
//     s1.marks=40;
//     s1.age = 19;
//     s1.rollnumber = 241501;
//     s1.display();
//     return 0;

// }

// #include<iostream>
// using namespace std;
// class student{
// public:
//     string names;
//     int rollnumber;

//     student(string a,int r){
//         names = a;
//         rollnumber = r;
//     }

//     void display(){
//         cout<<names<<" "<<rollnumber<<" "<<endl;
//     }
// };
// int main(){
//     student s1("ashrith",241501);
//     s1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class bank{
// private:
//     int balance;
// public:
//     bank(int data){
//         balance = data;
//     }

//     int getbalance(){
//         return balance;
//     }

// };
// int main(){
//     bank s1(5000);
//     cout<<s1.getbalance();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class bank {
// private:
//     int balance;
// public:
//     bank(int data){
//         if(data>0){
//             balance = data;
//         }else{
//             balance=0;
//         }
//     }

//     int getbalance(){
//         return balance;
//     }

// };
// int main(){
//     bank s1(-20);
//     cout<<s1.getbalance()<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class student{
// public:
//     string name;
//     int age;
//     int rollNo;

//     void display(){
//         cout<<name<<" "<<age<<" "<<rollNo<<" "<<endl;
//     }
// };

// int main(){
//     student s1;
//     s1.name = "Ashrith";
//     s1.age = 19;
//     s1.rollNo = 241501;
//     s1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class student{
// public:
//     string name;
//     int age;
//     int rollNo;
//     student(string a,int b,int c){
//         name = a;
//         age = b;
//         rollNo = c;
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<rollNo<<" "<<endl;
//     }

// };
// int main(){
//     student s1("Ashrith",19,241501);
//     s1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class calculator{
// public:
//     int a;
//     int b;
//     calculator(int r,int t){
//         a = r;
//         b = t;
//     }

//     int sum(){
//         return a+b;
//     }

//     int sub(){
//         return a-b;
//     }
// };

// int main(){
//     calculator s1(10,20);
//     cout<<"The sum is:"<<s1.sum()<<endl;
//     cout<<"The sub is:"<<s1.sub()<<endl;
//     return 0;
// }