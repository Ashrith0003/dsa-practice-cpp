#include<iostream>
using namespace std;
class shape{
private:
    int result;
public:
    void Area(int l,int b){
        result = l*b;
    }

    void Area(int r){
        result = (22/7)*r*r;
    }

    int getresult(){
        return result;
    }
};

int main(){
    shape s1;
    s1.Area(10,20);
    cout<<s1.getresult()<<endl;
    s1.Area(40);
    cout<<s1.getresult()<<endl;
    return 0;
}

