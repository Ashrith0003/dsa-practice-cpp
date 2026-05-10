#include<iostram>
using namespace std;
class Istack{
public:
    virtual void push(int) =0;
    virtual void pop(int) =0;
    virtual void display(int) =0;
};

class Arraystack:public Istack{
private:
    int arr[5];
    int top;
public:
    Arraystack(){
        top = -1;
    }

    void push(){
        if(top == 4){
            cout<<"the stack is full";
            return;
        }
    }
    arr[++top] = x;

    void pop(){
        if (top == -1){
            cout<<"the stack is empty";
            return;
        }
        top--;
    }

    void display(){
        if(top == -1){
            cout<<"stack is empty \n";
        }

        for(int i = top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Istack*s;
    Arraystack a;
    s = &a;
}