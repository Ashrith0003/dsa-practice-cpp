#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("data.txt");

    fout<<"Hello world";
    fout<<"This is ashrith";

    fout.close();
    return 0;
}
