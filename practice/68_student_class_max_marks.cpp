#include<iostream>
using namespace std;
class student{
private:
    int marks;
    string name;
public:
    student(){

    }
    student(int m,string n){
        marks = m;
        name = n;
    }
    void input(){
        cout<<"enter the marks and name :";
        cin>>marks>>name;
    }

    int getmarks(){
        return marks;
    }
    string getname(){
        return name;
    }
};


int main(){
    student s[3];
    for(int i=0;i<3;i++){
        s[i].input();
    }

    int maxsum = s[0].getmarks();
    string maxsumname =s[0].getname();
    for(int i=1;i<3;i++){
        if(s[i].getmarks() > maxsum){
            maxsum = s[i].getmarks();
            maxsumname = s[i].getname();
        }
    }
    cout<<"The maxsum is: "<<maxsum<<" "<<maxsumname;

    return 0;
}
