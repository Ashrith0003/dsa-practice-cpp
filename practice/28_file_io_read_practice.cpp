#include<iostream>
#include<fstream>
using namespace std;
int mian(){
    ifstream fin;
    fin.open("data.txt");
    if(!fin){
        cout<<"file not found ";
        return 0;
    }
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }

    fin.close();
    return 0;
}
