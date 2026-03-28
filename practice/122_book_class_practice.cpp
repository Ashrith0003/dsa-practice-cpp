#include<iostream>
using namespace std;
class Book{
private:
    string title;
    string author;
    int price;
public:
    void setdetails(string title,string author,int price){
        this->title = title;
        this->author = author;
        this->price = price;
    }

    void display(){
        cout<<"The title name :"<<title<<endl;
        cout<<"The Author :"<<author<<endl;
        cout<<"The price : "<<price<<endl;
    }
};

int main(){
    Book s1;
    s1.setdetails("romantice","Ashrith",900);
    s1.display();
    return 0;
}
