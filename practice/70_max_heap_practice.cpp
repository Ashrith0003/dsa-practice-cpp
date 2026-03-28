#include<iostream>
#include<algorithm>
using namespace std;
class heapmax{
    int arr[100];
    int size;
public:
    heapmax(){
        size = 0;
    }
    void insert(int value){ 
        size++; 
        arr[size] = value;
        heapfiy(size);
        
    }

    void heapfiy(int index){
        while(index>1){
            int parent = (index)/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent ;
            }else{
                break;
            }
        }
    }

    void display(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletion(){
        if(size == 0){
            cout << "The heap is empty";
            return;
        }
        cout<<"The deleted element :"<<arr[1]<<endl;
        arr[1]=arr[size];
        size--;
        heapfiydown(1);
    }
    void heapfiydown(int index){
    while(true){
        int largest= index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left < size && arr[left] > arr[largest])
             largest =left;   
        
        if(right <size && arr[right] > arr[largest])
            largest =right;

        if(largest == index)
            break;

        swap(arr[largest],arr[index]);
        index = largest;
    }
}
};

int main(){
    heapmax h;
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(35);
    h.insert(25);
    h.insert(70);
    cout << "Max Heap Elements: ";
    h.display();
    h.deletion();  // delete max
    cout << "After deletion: ";
    h.display();
    return 0;
};
