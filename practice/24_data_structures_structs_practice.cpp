structers// 

struct Node{
    int data;  //single linked list //
    Node*next;
public:
    Node(int value){
        data = value;
        next = NULL;
    }
};

struct DDNode{
    int data;
    DDNode*prev;  // doubly linked list //
    DDNode*next;
public:
    DDNode(int value){
        data = value;
        prev = next = NULL;
    }

};

struct btNode{            
    int data;       
    btNode*left;      
    btNode*right;     // tree//
public:
    btNode(int value){
        data = value;
        right = left = NULL;
    }

};

#define max 100;
struct Graph{ 
    int arr[max][max];               
    int v;
public:
    Graph(int size){
        v = size;
        for(int i=0;i<size;<i++){
            for(int j=0;j<size;j++){
                arr[i][j]=0;
            }
        }
    }
}
