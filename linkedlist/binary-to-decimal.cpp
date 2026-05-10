#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int val){
        data = val;
        next = NULL;
    }

    int getdecimal(Node*head){
        int ans = 0;
        while(head != NULL){
            ans = ans*2+head->data;
            head = head->next;
        }
        return ans;
    }

    void Dispaly(Node*head){
        Node*temp = head;

        while(temp!= NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    Node*first = new Node(1);
    Node*second = new Node(0);
    Node*third = new Node(0);
    Node*fourth = new Node(1);
    Node*fifth = new Node(1);

    first->next = second;
    second->next = third;
    third ->next = fourth;
    fourth->next = fifth;

    Node s1(0);
    s1.Dispaly(first);
    cout<<s1.getdecimal(first);

    return 0;
}

