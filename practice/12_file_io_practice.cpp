#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("data.txt");
    if(!fin){
        cout<<"fil not found";
    }
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    ios::in |ios::out |ios::app 
    fin.close();
    return 0;
}