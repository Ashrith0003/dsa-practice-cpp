#include<iostream>
#include<vector>
using namespace std;
class Node{
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left=right=NULL;
    }
}