#include<iostream>
using namespace std;
class Marks{
private:
    int score[5];
public:
    void setvalue(){
        for(int i=0;i<5;i++){
            cout<<"enter the marks of "<< i <<"student"<<endl;
            cin>>score[i];
        }
    }

    float calculateAvg(){
        int sum = 0;
        float avg = 0;
        for(int i=0;i<5;i++){
            sum +=score[i];
        }
        avg =  sum/5.0;
        return avg;
    }
};

int main(){
    Marks s1;
    s1.setvalue();
    cout<<s1.calculateAvg();
    return 0;
}
