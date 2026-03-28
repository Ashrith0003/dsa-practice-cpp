#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("data.txt" ,ios::in|ios::out);

    string line;
    getline(file,line);
    cout<<line<<endl;

    file<< "\nnew content added.";
    file.close();
    return 0;
}
