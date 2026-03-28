// #include<iostream>
// using namespace std;
// class student{
// private:
//     int marks;
//     string name;
// public:
//     int getmarks(){
//         return marks;
//     }
//     string getname(){
//         return name;
//     }
//     void input(){
//         cout<<"enter the name and marks : ";
//         cin>>name>>marks;
//     }

//     static int calculate(student s[],int n){
//         int sum =s[0].getmarks();
//         for(int i=1;i<n;i++){
//             sum +=s[i].getmarks();
//         }
//         return sum;
//     }

//     static void max_marks(student s[],int n){
//         int max_marks = s[0].getmarks();
//         string max_name =s[0].getname();
//         for(int i=1;i<n;i++){
//             if(s[i].getmarks() > max_marks){
//                 max_marks =s[i].getmarks();
//                 max_name = s[i].getname();
//             }
//         }
//         cout<<"highest marks :"<<max_marks<<endl<<"name of the subject: "<<max_name<<endl;
//     }
// };
// int main(){
//     student s[3];
//     for(int i=0;i<3;i++){
//         s[i].input();
//     }
//     cout<<"The total marks : "<<student::calculate(s,3)<<endl;
//     student::max_marks(s,3);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class book{
// private:
//     string book_name;
//     string author;
//     int price;
// public:
//     string getbook(){
//         return book_name;
//     }

//     string getauthor(){
//         return author;
//     }

//     int getprice(){
//         return price;
//     }

//     void input(){
//         cout<<"enter the book author and price : ";
//         cin>>book_name>>author>>price;
//     }

//     void output() {
//         cout << "Book : " << book_name
//              << " | Author : " << author
//              << " | Price : " << price << endl;
//     }

   

//     static void search(book s[],int n,string value){
//      bool found = false;
//         for(int i=0;i<n;i++){
//             if(s[i].getauthor() == value){
//                 s[i].output();
//                 found = true;
//             }
//         }
//         if (!found) {
//             cout << "No books found for author: " << value << endl;
//         }

//     }
// };

// int main(){
//     book s[5];

//     for(int i=0;i<5;i++){
//         s[i].input();
//     }
    
//     cout << "\n--- List of Books ---\n";
//     for(int i=0;i<5;i++){
//         s[i].output();
//     }

//     cout << "\n--- Search Result ---\n";
//     book::search(s,5,"ashrith");

//     return 0;

// }

#include<iostream>
#include<string>
using namespace std;
class cricketer{
private:
    string name;
    int runs;
public:
    string getname(){
        return name;
    }

    int getruns(){
        return runs;
    }

    
}