// #include<iostream>
// using namespace std;
// class student{
// private:
//     int arr[5];
// public:
//     int input(){
//         cout<<"enter the elements:";
//         for(int i=0;i<5;i++){
//             cin>>arr[i];
//         }
//     }

//     void output(){
//         cout << "Array elements are: ";
//         for(int i=0;i<5;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main(){
//     student s1;
//     s1.input();
//     s1.output();
//     return 0;

// #include<iostream>
// using namespace std;
// class student{
// public:
//     string name;
//     int rollno;
//     int phonenumber;

//     student() {}

//     student(string n,int m,int k){
//         name = n;
//         rollno = m;
//         phonenumber =k;
//     }

//      void display() {
//         cout << name << " " << rollno << " " << phonenumber << endl;
//     }
// };

// int main(){
//     student s[5];
//     s[0] = student("Thanush", 241540, 9546823);
//     s[1] = student("Ashrith", 241501, 9876543);
//     s[2] = student("Rahul", 241520, 9123456);

//     for(int i = 0; i < 3; i++) {
//         s[i].display();
//     }
//     return 0;

// #include<iostream>
// using namespace std;
// class students{
// private:
//     string name;
//     int rollno;
//     long long phonenumber;
// public:
//     students() {} 

//     students(string a,int b,int c){
//         name = a;
//         rollno =b;
//         phonenumber = c;
//     }

//     int input(){
//         cout << "Enter name and roll number: ";
//         cin>>name>>rollno>>phonenumber;
//     }

//       void display() {
//         cout << name << " " << rollno <<" "<<phonenumber<<" "<< endl;
//     }
// };

// int main(){
//     students s[3];
//     for(int i=0;i<3;i++){
//         s[i].input();
//     }
     
//     cout << "\nStudent details:\n";
//      for(int i=0;i<3;i++){
//         s[i].display();
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class student{
// private:
//     int marks;
//     string name;
// public:
//     student(){

//     }
//     student(int m,string n){
//         marks = m;
//         name = n;
//     }
//     void input(){
//         cout<<"enter the marks and name :";
//         cin>>marks>>name;
//     }

//     int getmarks(){
//         return marks;
//     }
//     string getname(){
//         return name;
//     }
// };


// int main(){
//     student s[3];
//     for(int i=0;i<3;i++){
//         s[i].input();
//     }

//     int maxsum = s[0].getmarks();
//     string maxsumname =s[0].getname();
//     for(int i=1;i<3;i++){
//         if(s[i].getmarks() > maxsum){
//             maxsum = s[i].getmarks();
//             maxsumname = s[i].getname();
//         }
//     }
//     cout<<"The maxsum is: "<<maxsum<<" "<<maxsumname;

//     return 0;
// }

#include<iostream>
using namespace std;
class student{
private:
    int marks;
    string sub_name;
public:
    void input(){
        cout<<"enter the marks and sub_name :";
        cin>>marks>>sub_name;
    }
    int getMarks(){
        return marks;
    }

    static int totalmarks(student s[],int n){
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += s[i].getMarks();
        }
        return total;
    }

        static int maxMarks(student s[], int n) {
        int max = s[0].getMarks();
        for (int i = 1; i < n; i++) {
            if (s[i].getMarks() > max) {
                max = s[i].getMarks();
            }
        }
        return max;
    }

    static int minMarks(student s[], int n) {
        int min = s[0].getMarks();
        for (int i = 1; i < n; i++) {
            if (s[i].getMarks() < min) {
                min = s[i].getMarks();
            }
        }
        return min;
    }

};
int main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].input();
    }
    cout << "Total Marks: " << student::totalmarks(s, 5) << endl;
    cout << "Maximum Marks: " << student::maxMarks(s, 5) << endl;
    cout << "Minimum Marks: " << student::minMarks(s, 5) << endl;
    return 0;
}