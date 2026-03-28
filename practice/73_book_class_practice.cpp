#include<iostream>
#include<string>
using namespace std;
class book{
private:
    string book_name;
    string author;
    int price;
public:
    string getbook(){
        return book_name;
    }

    string getauthor(){
        return author;
    }

    int getprice(){
        return price;
    }

    void input(){
        cout<<"enter the book author and price : ";
        cin>>book_name>>author>>price;
    }

    void output() {
        cout << "Book : " << book_name
             << " | Author : " << author
             << " | Price : " << price << endl;
    }

   

    static void search(book s[],int n,string value){
     bool found = false;
        for(int i=0;i<n;i++){
            if(s[i].getauthor() == value){
                s[i].output();
                found = true;
            }
        }
        if (!found) {
            cout << "No books found for author: " << value << endl;
        }

    }
};

int main(){
    book s[5];

    for(int i=0;i<5;i++){
        s[i].input();
    }
    
    cout << "\n--- List of Books ---\n";
    for(int i=0;i<5;i++){
        s[i].output();
    }

    cout << "\n--- Search Result ---\n";
    book::search(s,5,"ashrith");

    return 0;

}
