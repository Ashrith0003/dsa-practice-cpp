bool isempty(){
    if(rare == size-1){
        return true;
    }else{
        return false;
    }
}

bool isfull(){
    if(front == -1 ||front >rare){
        return true;
    }else{
        return false;
    }
}


void enqueue(int value){
    if(isfull){
        cout<<"the queue is full";
    }
    if(front == -1){
        front = 0;
        arr[++rare]= value;
    }
}
void dequeue(){
    if(isempty()){
        cout<<"the queue is empty";
    }
    arr[front];
    front++;
}
