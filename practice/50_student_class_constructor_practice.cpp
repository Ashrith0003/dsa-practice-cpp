#include<iostream>
using namespace std;
class student{
public:
    string names;
    int rollnumber;

    student(string a,int r){
        names = a;
        rollnumber = r;
    }

    void display(){
        cout<<names<<" "<<rollnumber<<" "<<endl;
    }
};
int main(){
    student s1("ashrith",241501);
    s1.display();
    return 0;
}
