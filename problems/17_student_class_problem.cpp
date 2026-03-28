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