#include<iostream>
#include<queue>
// using namespace std;
// struct Node{
//     int data;
//     Node*left;
//     Node*right;
// public:
//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// void preorder(Node*root){
//     if(root== NULL){
//         return;
//     }else{
//         cout<<root->data<<" ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }


// void inorder(Node*root){
//     if(root== NULL){
//         return;
//     }else{
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }


// void postorder(Node*root){
//     if(root== NULL){
//         return;
//     }else{
//         postorder(root->left);
//         postorder(root->right);
//         cout<<root->data<<" ";
//     }
// }

// void levelorder(Node*root){
//     if(root == NULL){
//         return;
//     }else{
//         queue<Node*> s;
//         s.push(root);
//         while(!s.empty()){
//             Node*temp = s.front();
//             s.pop();
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 s.push(temp->left);
//             }
//             if(temp->right){
//                 s.push(temp->right);
//             }
//         }
        
//     }
// };

// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder: ";
//     preorder(root);

//     cout << "\nInorder: ";
//     inorder(root);

//     cout << "\nPostorder: ";
//     postorder(root);

//     cout << "\nLevel-order: ";
//     levelorder(root);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// #include<queue>
// struct Node{
//     int data;
//     Node*left;
//     Node*right;
// public:
//     Node(int val){
//         data = val;
//         left=right=NULL;
//     }
// };

// void preorder(Node*root){
//     if(root == NULL){
//         return;
//     }else{
//         cout<<root->data<<" ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void inorder(Node*root){
//     if(root == NULL){
//         return;
//     }else{
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }

// void postorder(Node*root){
//     if(root == NULL){
//         return;
//     }else{
//         postorder(root->left);
//         postorder(root->right);
//         cout<<root->data<<" ";
//     }
// }


// void levelorder(Node*root){
//     if(root == NULL){
//         return;
//     }else{
//         queue<Node*> q;
//         q.push(root);
        
//         while(!q.empty()){
//             Node*temp = q.front();
//             q.pop();
//             cout<<root->data<<" "; //ff//
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9};
//     int key,flag = 0;
//     cout<<"enter the key :";
//     cin>>key;
//     for(int i=0;i<10-1;i++){
//         if(arr[i]==key){
//             cout<<i,key;
//             flag = 1;
//         }
//     }
//     if(flag == 0){
//         cout<<"element not found ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int low  = 0;
//     int high = 10;
//     int mid = (high+low)/2;
//     int arr[10] ={1,2,3,4,5,6,7,8,9};
//     int key = 5;
//     while(high >= low){
//         if(arr[mid]==key){
//             cout<<mid;
//         }else{
//             if(arr[mid] > key){
//                 high = mid-1;
//             }else{
//                 low = mid+1;
//             }
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={5,7,8,10,12,14,20,40,100,30};
//     for(int i=0;i<10-1;i++){
//         for(int j=0;j< 10-i-1;j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }


//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={5,6,7,10,20,30,50,70,100,101};
//     for(int i=0;i<10;i++){
//         int key = arr[i];
//         int j = i-1;

//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
//    for(int i=0;i<10;i++){
//     cout<<arr[i]<<" ";
//    }

//    return 0;
// }


// structers// 

// struct Node{
//     int data;  //single linked list //
//     Node*next;
// public:
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// struct DDNode{
//     int data;
//     DDNode*prev;  // doubly linked list //
//     DDNode*next;
// public:
//     DDNode(int value){
//         data = value;
//         prev = next = NULL;
//     }

// };

// struct btNode{            
//     int data;       
//     btNode*left;      
//     btNode*right;     // tree//
// public:
//     btNode(int value){
//         data = value;
//         right = left = NULL;
//     }

// };

// #define max 100;
// struct Graph{ 
//     int arr[max][max];               
//     int v;
// public:
//     Graph(int size){
//         v = size;
//         for(int i=0;i<size;<i++){
//             for(int j=0;j<size;j++){
//                 arr[i][j]=0;
//             }
//         }
//     }
// }


// stack operation//

// #include<iostream>
// using namespace std;
// struct stack{
//     int arr[100];
//     int top;
//     int max;
// public:
//     stack(int size){
//         max = size ;
//         top =-1;
//     }


// void push(int value){
//     if(top > max-1){
//         cout<<"stack is full";
//     }else{
//         arr[++top] = value;
//     }
// }

// void pop(){
//     if(top < 0){
//         cout<<"stack is empty";
//     }else{
//         top--;
//     }
// }

// void peek(){
//     if(top < 0){
//         cout<<"stack is empty";
//     }else{
//         cout<<arr[top];
//     }
// }

// void display(){
//     for(int i=0;i<top;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// };

// #include<iostream>
// using namespace std;
// struct queue{
//     int* arr;
//     int front;
//     int rare;
//     int max;
//     queue(int size){
//         front = -1;
//         rare = -1;
//         max = size;
//         arr = new int[size];
//     }

//     void enqueu(int val){
//         if(rare == max-1){
//             cout<<"queue is full"; 
//         }else {
//             if(rare == -1){
//                 rare = front =0;
//             }else{
//                 arr[rare++] = value;
//             }
            
//         }
//     }

//     void dequeue(){
//         if(front == -1 || front>rare ){
//             cout<<"the queue is empty";
//         }else{
//               front++;
//               if(front >rare){
//                 front = rare = -1;
//               }
//         }
//     }

//     void display(){
//         if(front ==-1 || front > rare){
//             cout<<"queu is empty";
//         }
//         for(int i=front;i<rare;i++){
//             cout<<arr[i]<<" ";
//         }
//     }

// };

// #include<iostream>
// using namespace std;

// void insertAtbg(int value){
//     if(n == max-1){
//         cout<<"array is full";
//     }else{
//         for(int i=n;i>0;i--){
//             arr[i] = arr[i-1];
//         }
//         arr[0] = value;
//         n++;
//     }
// }

// void deleteAtbg(){
//     if(n == 0){
//         cout<<"array is empty";
//     }else{
//         for(int i=0;i<n-1;i++){
//             arr[i] = arr[i+1];
//         }
//         n--;
//     }
// }

// void insertatend(int value){
//     if(n == max-1){
//         cout<<"array is full";
//     }else{
//         arr[n] = value;
//     }
// }

// void deleteAtend(){
//     if(n == 0){
//         cout<<"array is empty";
//     }else{
//         n--;
//     }
// }


// void insertatpos(int value,int pos){
//     if(pos < 0|| pos > n){
//         cout<<"invalid pos";
//     }else{
//         for(int i=n;i>=pos;i--){
//             arr[i] = arr[i-1];
//         }
//         arr[pos]= value;
//         n++;
//     }
// }

// void deleteAtPosition(int arr[], int &n, int pos){
//     if(n == 0){
//         cout << "Array is empty\n";
//         return;
//     }

//     for(int i = pos-1; i < n-1; i++){
//         arr[i] = arr[i+1];
//     }
//     n--;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int mian(){
//     ifstream fin;
//     fin.open("data.txt");
//     if(!fin){
//         cout<<"file not found ";
//         return 0;
//     }
//     string line;
//     while(getline(fin,line)){
//         cout<<line<<endl;
//     }

//     fin.close();
//     return 0;
// }


// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream fout;
//     fout.open("data.txt");

//     fout<<"Hello world";
//     fout<<"This is ashrith";

//     fout.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file;
//     file.open("data.txt" ,ios::in|ios::out);

//     string line;
//     getline(file,line);
//     cout<<line<<endl;

//     file<< "\nnew content added.";
//     file.close();
//     return 0;
// }

// sort(v.begin(),v.end());
// for(int i=0;i<v.size()-1;i++){
// int left = i+1;
// int right =v.size()-1;
// while(left<right){
//     if(v[i]+v[left]+v[right] == 0){
//     left++;
//     right--;
// }else if(v[i]+v[left]+v[right] > 0){
//     right--;
// }else{
//     left++;
// }}
// };

// int average =min;
// for(int i=0;i<k;i++){
//     sum=sum+nums[i];
// }
//     i++;
//     k++;
//     result=sum/k;
//     delete arr[0];
//     if(average<result){
//         average=result;
//     }
  

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[6] = {1, 12, -5, -6, 50, 3};
//     int k = 4;
//     int n = 6;

//     int sum = 0;
//     for (int i = 0; i < k; i++) {
//         sum += arr[i];
//     }

//     int maxsum = sum;

  
//     for (int i = k; i < n; i++) {
//         sum = sum - arr[i - k] + arr[i];
//         maxsum = max(maxsum, sum);
//     }

//     double average = (double)maxsum / k;

//     cout << "Maximum Average: " << average << endl;

//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[6] = {1, 12, -5, -6, 50, 3};
//     int k = 4;
//     int sum =0;
//     for(int i=0;i<k;i++){
//         sum=sum+arr[i];
//     }

//     int maxsum =  sum;
//     for(int i=k;i<6;i++){
//         sum=sum-arr[i-k]+arr[i];
//         maxsum=max(maxsum,sum);
//     }
//     double average = (double)maxsum/k;
//     cout<<"The max average :"<<average;
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int nums[6] = {2,1,5,1,3,2};
//     int sum=0;
//     int k =3;
//     for(int i=0;i<k;i++){
//         sum=sum+nums[i];
//     }
//     int maxsum =sum;
//     for(int i=k;i<6;i++){
//         sum = sum -nums[i-k]+nums[i];
//         maxsum =max(maxsum,sum);
//     }
//     cout<<"The max sum :"<<maxsum;
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int nums[6]={2,3,1,2,4,3};
//     int target = 6;
//     int sum =0;
//     int left = 0;
//     int right = 7;
//     for(int i=left;i<right;i++){
//         sum = sum+nums[i];
//         if(sum >= target){
//             right--;
//             sum=sum - nums[right];
//         }else{
//             cout<<sum;
//         }
//     }
//     return 0;
// }
left=0;
right=s.size();

while(left<right){
    swap(left,right);
    left++;
    right--;
}