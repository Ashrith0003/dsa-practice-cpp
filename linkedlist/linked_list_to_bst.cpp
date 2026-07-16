class Node{
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
}

Node*problem(Node*head){
    if(head== NULL) return NULL;
    if(head->next == NULL) return new TreeNode(head->val);
    Node*fast = head; 
    Node*slow = head; 
    Node*prev = head;
    while(fast && fast->next){
        prev = slow ;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;



}