#include<iostream>
using namespace std;
class student{
private:
    int marks;
    string name;
public:
    int getmarks(){
        return marks;
    }
    string getname(){
        return name;
    }
    void input(){
        cout<<"enter the name and marks : ";
        cin>>name>>marks;
    }

    static int calculate(student s[],int n){
        int sum =s[0].getmarks();
        for(int i=1;i<n;i++){
            sum +=s[i].getmarks();
        }
        return sum;
    }

    static void max_marks(student s[],int n){
        int max_marks = s[0].getmarks();
        string max_name =s[0].getname();
        for(int i=1;i<n;i++){
            if(s[i].getmarks() > max_marks){
                max_marks =s[i].getmarks();
                max_name = s[i].getname();
            }
        }
        cout<<"highest marks :"<<max_marks<<endl<<"name of the subject: "<<max_name<<endl;
    }
};
int main(){
    student s[3];
    for(int i=0;i<3;i++){
        s[i].input();
    }
    cout<<"The total marks : "<<student::calculate(s,3)<<endl;
    student::max_marks(s,3);
    return 0;
}
