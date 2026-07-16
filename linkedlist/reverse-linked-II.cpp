// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }

//     Node*reverse(Node*head,int right,int left){
//         if(head == NULL || left == right){
//             return head;
//         }

//         Node*dummy = new Node(0);
//         dummy->next = head;
//         Node*prev = dummy;

//         for(int i=0;i<left;i++){
//             prev = prev->next;
//         }

//         Node*current = prev->next;

//         for(int i=0;i<right-left;i++){
//             Node*nextNode = current->next;
//             current->next = nextNode->next;
//             nextNode*next = prev->next;
//             prev->next = nextNode;
//         }

//         return dummy->next;
//     }
// }
