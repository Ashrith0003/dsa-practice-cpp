#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){
    Node*first = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(20);

    first ->next = second;
    second -> next = third;
    third -> next = NULL;


    Node*temp = first;
    while(temp != nullptr){
        cout << temp ->data << "->";
        temp =temp ->next;
    }
    cout <<"NULL"<<endl;
    return 0;


}
