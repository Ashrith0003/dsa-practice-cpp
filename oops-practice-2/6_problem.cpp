#include<iostream>
using namespace std;
class RoundRobin{
    private:
        class Node{
        public:
            int data;
            Node*next;

            Node(int val){
                data = val;
                next = NULL;
            }
  
        };
    Node*tail;
    Node*current;
public:
    RoundRobin(){
        tail = NULL;
        current = NULL;
    }

    void insert(int val){
        Node*newnode = new Node(val);

        if(tail == NULL){
            tail = newnode;
            tail->next = tail;
            current = newnode;
            
        }else{
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void cycle(){
        if(current == NULL){
            cout<<"Not is there for executing "<<endl;
            return;
        }

        cout<<"p ->"<<current->data<<endl;
        current = current->next;
    }

    void display(){
        if(tail == NULL){
            cout<<"the queue is Empty"<<endl;
            return;
        }

        Node*temp =tail->next;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp != tail->next);

        cout<<endl;
    }
};

int main(){
    RoundRobin R;
    R.insert(1);
    R.insert(2);
    R.insert(3);
    R.insert(4);
    R.insert(5);

    R.display();

    cout << "\nRound Robin Execution:\n";
    R.cycle();
    R.cycle();
    R.cycle();
    R.cycle();
    R.cycle();
    R.cycle();
    return 0;
};
