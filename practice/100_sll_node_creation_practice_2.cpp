#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;

    }
};
int main(){
    Node*first = new Node(10);
    Node*head = first;

    cout<< head->data<<"->";
    cout<<head->next;
}
