#include<iostream>
using namespace std;
class students{
private:
    string name;
    int rollno;
    long long phonenumber;
public:
    students() {} 

    students(string a,int b,int c){
        name = a;
        rollno =b;
        phonenumber = c;
    }

    int input(){
        cout << "Enter name and roll number: ";
        cin>>name>>rollno>>phonenumber;
    }

      void display() {
        cout << name << " " << rollno <<" "<<phonenumber<<" "<< endl;
    }
};

int main(){
    students s[3];
    for(int i=0;i<3;i++){
        s[i].input();
    }
     
    cout << "\nStudent details:\n";
     for(int i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}

