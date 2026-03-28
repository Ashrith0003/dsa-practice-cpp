void insertion(){
    arr[size] == value;
    heapfiyup(size);
    size++;
}
void deletion(){
    arr[0]=arr[size-1];
    size--;
    heapfiydown(0);
}

heapfiyup(){
    while(index >0){
        int parent =(index-1)/2;
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
        }
        index =parent;
    }
}

heapfiydown(){
    while(true){
        int largest = index;
        int left = 2*index+1;
        int right =2*right+2;
        if(left<size && arr[left]>arr[largest]){
            largest =left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest =right;
        }
        if(largest != index){
            swap(arr[largest],arr[index]);
            index =larest;
        }
    }
    }
}
