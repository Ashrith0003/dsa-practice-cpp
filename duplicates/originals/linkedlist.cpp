// // #include<iostream>
// // using namespace std;
// // int capacity = 10;
// // int n_elements = 0;
// // int arr[10];
// // bool insertion(int iteam){
// //     if(capacity == n_elements){
// //         return false;
// //     }
// //     arr[capacity-n_elements-1] = iteam;
// //     n_elements++;
// //     return true;
// // }

// // bool deletion(int iteam){
// //     if(n_elements == 0){
// //         return false;
// //     }
// //     int found_index =-1;
// //     int start = capacity-n_elements;
// //     for(int i=start;i<capacity-1;i++){
// //         if(arr[i]== iteam){
// //             found_index = i;
// //             break;
// //         }
// //     }
// //     if(found_index == -1){
// //         return false;
// //     }
// //     for(int i=found_index;i < capacity-n_elements;i++){
// //         arr[i]=arr[i-1];
// //     }
// //     n_elements--;
// //     return true;
    
// // }
// // void display(){
// //     for(int i=capacity-1;i>=capacity-n_elements;i--){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     insertion(10);
// //     insertion(20);
// //     insertion(30);
// //     insertion(40);
// //     insertion(50);
// //     display();
// //     deletion(30);
// //     deletion(40);
// //     deletion(10);
// //     display();
// // }
// // #include<iostream>
// // using namespace std;
// // int linersearch(int arr[],int key){
// //     for(int i=0;i<10;i++){
// //         if(arr[i]==key){
// //             return i;
// //         }
// //     }
// // }
// // int main(){
// //     int arr[10]={10,20,30,40,50,60,70,80,90,100};
// //     int key = 70;
// //     cout<<linersearch(arr,key);
// //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // int binarysearch(int arr, int low,int high,int mid){
    
// // }
// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next = nullptr;
//     }
// };

// int main(){
//     Node*first = new Node(10);
//     Node*second = new Node(20);
//     Node*third = new Node(20);

//     first ->next = second;
//     second -> next = third;
//     third -> next = NULL;


//     Node*temp = first;
//     while(temp != nullptr){
//         cout << temp ->data << "->";
//         temp =temp ->next;
//     }
//     cout <<"NULL"<<endl;
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
//     Node*first = new Node(10);
//     Node*head = first;

//     cout<< head->data<<"->";
//     cout<<head->next;
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
//     Node*first =new Node(10);
//     Node*second =new Node(20);
//     Node*third =new Node(30);
//     Node*fourth =new Node(40);
//     Node*fifth =new Node(50);

//     first->next =second;
//     second->next=third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth ->next = NULL; 

//     Node*head=first;
//     while( head != NULL){
//         cout<< head ->data <<" ->";
//         head = head->next;
//     }

//     cout << "NULL"<<endl;
    
    

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
// void insertatbeginning(Node*&head ,int value){
//     Node*newnode = new Node(value);
//     newnode ->next = head;
//     head = newnode; 
// }




// int main(){
//     Node*head = new Node(100);
//     Node*first = new Node(200);
//     Node*second= new Node(300);
//     Node*third = new Node(400);
//     Node*fourth = new Node(500);
//     head ->next = first;
//     first ->next = second;
//     second ->next = third;
//     third -> next = fourth;
//     fourth -> next = NULL;
//    insertatbeginning(head,600);
//     Node*temp = head;
//     while(temp != NULL){
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

// void insertatend(Node*&head,int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = newnode;
//         return ;
//     }
//     Node*temp = head;
//     while(temp->next != NULL){
//         temp=temp->next;
//     }
//     temp->next = newnode;

// }

// int main(){
//     Node*head = new Node(100);
//     Node*first = new Node(200);
//     Node*second= new Node(300);
//     Node*third = new Node(400);
//     Node*fourth = new Node(500);
//     head ->next = first;
//     first ->next = second;
//     second ->next = third;
//     third -> next = fourth;
//     fourth -> next = NULL;
//     insertatend(head,600);
//     Node*temp = head;
//     while(temp !=NULL){
//         cout<<temp ->data<<"->";
//         temp=temp->next;
//     }

//     cout<<"NULL"<<endl;

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


// void deletion()

// int main(){
//       Node*head = new Node(100);
//     Node*first = new Node(200);
//     Node*second= new Node(300);
//     Node*third = new Node(400);
//     Node*fourth = new Node(500);
//     head ->next = first;
//     first ->next = second;
//     second ->next = third;
//     third -> next = fourth;
//     fourth -> next = NULL;

//     Node*temp = head;
//     while(temp !=NULL){
//         cout<<temp ->data<<"->";
//         temp=temp->next;
//     }

//     cout<<"NULL"<<endl;

// }


// Doubly LInkedlist
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class DoublyList{
//     Node*head = NULL;
//     Node*tail =NULL;
// public :
//     DoublyList(){
//         head=tail=NULL;
//     }

//     void Push_front(int value){
//         Node*newnode =new Node(value);

//         if(head == NULL){
//             head = tail= newnode;
//         }else{
//             newnode->next = head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }

//     void print(){
//         Node*temp=head;
//         while(temp != NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// int main(){
//     DoublyList dll;
//     dll.Push_front(10);
//     dll.Push_front(20);
//     dll.Push_front(30);
//     dll.Push_front(40);
//     dll.print();


// }

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class DoublyList{
//     Node*head = NULL;
//     Node*tail =NULL;
// public :
//     DoublyList(){
//         head=tail=NULL;
//     }

//     void Push_back(int value){
//         Node*newnode =new Node(value);

//         if(head == NULL){
//             head = tail= newnode;
//         }else{
//             newnode->prev = tail;
//             tail->next = newnode;
//             tail = newnode;
//         }
// //     }

//     void print(){
//         Node*temp=head;
//         while(temp != NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// // };

// int main(){
//     DoublyList dll;
//     dll.Push_back(10);
//     dll.Push_back(20);
//     dll.Push_back(30);
//     dll.Push_back(40);
//     dll.print();


// }
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next=NULL;
//         next=NULL;
//     }

// };

// class DoublyLinkedList{
//     Node*head=NULL;
//     Node*tail=NULL;

// public:
//     DoublyLinkedList(){
//          head=tail=NULL; // checking it is empty or not //
//     }

//     void push_back(int value){
//         Node*newnode = new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }else{
//             newnode->prev = tail;
//             tail->next =newnode;
//             tail=newnode;
//         }
//     }

//     void display(){
//         Node*temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }

// };

// int main()LinkedList{
//  DoublyLinkedList dll;
//     dll.push_back(10); 
//     dll.push_back(20);
//     dll.push_back(30);
//     dll.push_back(40);
//     dll.display();


// }


// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class DoblyLinkedList{
//     Node*head=NULL;
//     Node*tail=NULL;
// public:
//     DoblyLinkedList(){
//         head=tail=NULL;
//     }

//     void push_back(int value){
//         Node*newnode =new Node(value);
//         if(head == NULL){
//             head=tail=newnode;
//         }else{
//             newnode->prev =tail;
//             tail->next = newnode;
//             tail=newnode;
//         }
//     }

//     void push_front(int value){
//         Node*newnode =new Node(value);
//         if(head == NULL){
//             head=tail=newnode;
//         }else{
//             head->prev = newnode;
//             newnode->next = head;
//             head =newnode;
//         }
//     }




//     void Display(){
//         Node*temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;

//     }
// };

// class DoblyLinkedList1{
//     Node*head =NULL;
//     Node*tail= NULL;
// public:
//     DoblyLinkedList1(){
//       head=tail=NULL;
//     }
    
//     void push_front(int value){
//         Node*newnode =new Node(value);
//         if(head == NULL){
//             head=tail=newnode;
//         }else{
//             head->prev = newnode;
//             newnode->next = head;
//             head =newnode;
//         }
//     }

//     void Display(){
//         Node*temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;

//     }

// };

// int main(){
//     DoblyLinkedList mms;
//     DoblyLinkedList mkk;

//     mms.push_back(10);
//     mms.push_back(20);
//     mms.push_back(30);
//     mms.push_back(40);
//     mms.push_back(50);
//     mms.push_back(60);
//     mms.Display();
//     mkk.push_front(10);
//     mkk.push_front(20);
//     mkk.push_front(30);
//     mkk.push_front(40);
//     mkk.push_front(50);
//     mkk.push_front(60);
//     mkk.Display();

// }

#include<iostream>
using namespace std;
struct Node{
    int data;
public:
    Node*next;
    Node*prev;
    Node*bottom;


    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
        bottom = NULL;
    }
};

Node*flatten(Node*head){
    if(head==NULL){
        return head;
    }

    Node*current = head; 
    Node*nextNode =NULL;

    while(current != NULL){
        if(current->bottom!=NULL){
            nextNode = current->next;
            current->next = flatten(current->bottom);
            current->next->prev = current; // establish the back ward connection
            current->bottom =NULL;    //removing the child 
        }
        current =current->next;
    }


    Node*tail = current;
    while(tail->next !=NULL){     //finding the tail 
        tail=tail->next;
       
        if(nextNode!=NULL){
            tail->next = nextNode;
            nextNode->prev = tail; 
        }
        
        return head;

    }
}

int main(){
    Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);
    head = flatten(head);
    Node*temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout <<"NULL"<<endl;

    return 0;
}