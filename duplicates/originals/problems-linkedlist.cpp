// #include<iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// void insertAtstart(Node*&head,int value){
//     Node*newnode =new Node(value);
//     newnode ->next =head;
//     head = newnode;
// }

// void insertAtend(Node*&head,int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = newnode;
//         return;
//     }

//     Node*temp =head;
//     while(temp->next != NULL){
//         temp =temp->next;
//     }
//     temp->next =newnode;
// }


// void deleteTheNode(Node*&head,int key){    
//     if(head == NULL){
//         return;
//     }
//     if(head->data == key){
//         Node* todelete = head;
//         head = head->next;
//         delete todelete;
//         return;
//     }

//     Node*temp = head;
//     while(temp->next != NULL && temp->next->data != key){
//         temp=temp->next;
//     }

//     if(temp->next == NULL){
//         return;
//     }
//     Node* toDelete = temp->next;    
//     temp->next = temp->next->next; 
//     delete toDelete;                
// }


// int main(){
//     Node*head = new Node(1);
//     Node*first =new Node(2);
//     Node*third = new Node(3);
//     Node*fourth = new Node(4);
//     Node*fifth = new Node(5);

//     head ->next = first;
//     first ->next = third;
//     third ->next = fourth;
//     fourth ->next = fifth;
//     fifth ->next = NULL;
//     insertAtstart(head,0);
//     insertAtend(head,6);
//     deleteTheNode(head,4);
//     Node*temp = head;
//     while(temp != NULL){
//         cout<<temp->data <<"->";
// //         temp=temp->next;
// //     }
// //     cout<<"NULL"<<endl;
// // }
// #include<iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node*next;

//      Node(int value){
//         data=value;
//         next=NULL;
//     }
// };

// int main(){
//     Node*head= new Node(10);
//     Node*first= new Node(20);
//     Node*second= new Node(30);
//     Node*third= new Node(40);
//     Node*fourth= new Node(50);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;

//     Node*current = head;
//     Node*pervious = NULL;
//     Node*next = NULL;

//     while(current!=NULL){
//         next = current->next;
//         current->next=pervious;   
//         pervious = current;       
//         current = next;    
//     };
//     head =pervious;

//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
// }
    
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next=NULL;
//     }
// };

// int main(){
//     Node*head = new Node(10);
//     Node*first = new Node(20);
//     Node*second = new Node(30);
//     Node*third = new Node(40);
//     Node*fourth = new Node(50);
//     Node*fifth = new Node(60);

//     head->next =first;
//     first->next = second;
//     second->next =third;
//     third->next =fourth;
//     fourth->next =fifth;
//     fifth->next =NULL;

//     Node*temp =head;
//     cout<<"orginal linkedlist";
//     while(temp!=NULL){
//         cout<<"->"<<temp->data;
//         temp=temp->next;
//     }
//      cout<<"NULL"<<endl;

//     Node*current =head;
//     Node*next =NULL;
//     Node*prv =NULL;

//     while(current!=NULL){
//         next =current->next;
//         current->next=prv;
//         prv = current;
//         current = next;
//     }

//     temp = prv;
//         cout << "Reversed Linked List: ";
//         while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }

//     cout<<"NULL"<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// int main(){
//     Node*head = new Node(10);
//     Node*first = new Node(20);
//     Node*second = new Node(30);
//     Node*third = new Node(40);
//     Node*fourth = new Node(50);
//     Node*fifth = new Node(60);
//     Node*sixth = new Node(70);

//     head->next =first;
//     first->next = second;
//     second->next =third;
//     third->next =fourth;
//     fourth->next =fifth;
//     fifth->next =sixth;
//     sixth->next =NULL;

//     Node*fast =head;
//     Node*slow =head;
//     while(fast!=NULL&&fast->next!=NULL){
//         slow =slow->next;
//         fast = fast->next->next;
//     }
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     } 
//     cout<<"NULL"<<endl;
//     cout<<"The middle term is ->"<<slow->data;
//     return 0;
// }
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
    bool iscycle = false;
    Node*head = new Node(10);
    Node*first = new Node(20);
    Node*second = new Node(30);
    Node*third = new Node(40);
    Node*fourth = new Node(50);
    Node*fifth = new Node(60);
    Node*sixth = new Node(70);

    head->next =first;
    first->next = second;
    second->next =third;
    third->next =fourth;
    fourth->next =fifth;
    fifth->next =sixth;
    sixth->next =head;

    Node*fast = head;
    Node*slow = head;
    while(fast!=NULL&&fast->next!=NULL){
        slow =slow->next;
        fast =fast->next->next;
        if(slow==fast){
            iscycle=true;
            break;
        }
    }
    slow = head;
    int result;
    while(iscycle){
        slow =slow->next;
        fast =fast->next;
        if(slow==fast){
            result = fast->data;
            break;
        }
    }
        
    cout<<(iscycle?"YES":"N0")<<endl;
    cout<<"THE CYCLE IS AT"<<" "<<result;
    return 0;
}







 

