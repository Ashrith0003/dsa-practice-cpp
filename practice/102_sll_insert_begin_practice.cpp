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
void insertatbeginning(Node*&head ,int value){
    Node*newnode = new Node(value);
    newnode ->next = head;
    head = newnode; 
}




int main(){
    Node*head = new Node(100);
    Node*first = new Node(200);
    Node*second= new Node(300);
    Node*third = new Node(400);
    Node*fourth = new Node(500);
    head ->next = first;
    first ->next = second;
    second ->next = third;
    third -> next = fourth;
    fourth -> next = NULL;
   insertatbeginning(head,600);
    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;

}
