// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// class student{
// public:
//     string name;
//     int age;
//     int marks;

//     student(string a,int b,int c){
//         name = a;
//         age = b;
//         marks = c;

//         if(age<0){
//             age = 0;
//         }
//         if(marks < 0 || marks > 100){
//             marks = 0;
//         }
//     }

//     void display(){
//         cout<<name<<" "<<age<<" "<<marks<<" ";
//     }
// };

// int main(){
//     student s1("Ashrith",19,101);
//     s1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class bank{
// private:
//     int balance;
// public:
//     bank(int r){
//         balance = r;
//     }

//     int deposit(int amt){
//         if(amt > 0){
//             balance +=amt;
//         }
//     }

//     int withdaraw(int amt){
//         if(amt <= balance){
//             balance -= amt;
//         }
//     }

//     int getbalance(){
//         return balance;
//     }
// };


// int main(){
//     bank s1(1000);
//     s1.deposit(500);
//     cout<<"The balance is :"<<s1.getbalance()<<endl;
//     s1.withdaraw(1000);
//     cout<<"The balance is :"<<s1.getbalance()<<endl;
//     return 0;
// }
// // #include<iostream>
// // using namespace std;
// // class student{
// // private:
// //     int rollno;
// // public:
// //     student(int r){
// //         rollno = r;
// //     }

// //     void display(){
// //         cout<<"The roll no :"<<rollno<<endl;
// //     }

// // };
// // int main(){
// //     student s1(241501);
// //     s1.display();
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class calculator{
// // private:
// //     int a,b;
// // public:
// //     calculator(int r ,int s){
// //         a = r;
// //         b = s;
// //     }

// //     int add(){
// //         return a+b;
// //     }
// //     int sub(){
// //         return a-b;
// //     }
// //     void showResult(){
// //         cout<<add()<<" "<<sub()<<endl;
// //     }

// // };
// // int main(){
// //     calculator s1(200,100);
// //     s1.showResult();
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// class Address{
// private:
//     string city;
//     int pincode;
//     string state;
// public:
//     Address(string c,int b,string k){
//         city = c;
//         pincode = b;
//         state = k;
//     }

//     void displayAddress() {
//         cout << "City: " << city << endl;
//         cout << "Pincode: " << pincode << endl;
//     };

//     int getpincode(){
//         cout<< pincode<<endl;
//     }
// };

// class student{
// private:
//     string name;
//     int rollno;
//     Address address;
// public:
//     student(string n,int a,string city,int pin):address(city,pin)
//     {
//         name=n;
//         rollno =a;

//     } 
//     void displayStudent() {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollno << endl;
//         address.displayAddress();
//     }
// };

// int main() {
//     student s1("Ashrith", 241501, "Hyderabad", 500001);
//     s1.getpincode();
//     s1.displayStudent();
//     return 0;
// }