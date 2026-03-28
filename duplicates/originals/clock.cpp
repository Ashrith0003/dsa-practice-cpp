#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
public:
    Node(int value){
        data = value;
        next = NULL;
    }

}


Node*createclock(int h,int m,int s){
    Node*hours = new Node(h);
    Node*minute = new Node(m);
    Node*second = new Node(s);

    hours->next = minute;
    minute->next = second;

    return hours;
}