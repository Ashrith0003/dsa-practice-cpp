#include<iostream>
using namespace std;

class BOOK{
    string title;
    string author;
    int price;
public:
    BOOK(string title ,string author,int price){
        this->price = price;
        this->author = author;
        this->title = title;
    }

    void Display(){
        cout<<"The author :"<<author<<endl;
        cout<<"The title name :"<<title<<endl;
        cout<<"the price :"<<price<<endl;
    }
};

int main(){
    BOOK s1("education","Akthar",25000);
    s1.Display();
    return 0;
}

