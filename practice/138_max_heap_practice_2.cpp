#include<iostream>
#include<algorithm>
using namespace std;
class maxheap{
    int arr[100];
    int size;
public:
    maxheap(){
        size=0;
    }

    void insert(int value){
        arr[size] = value;
        heapfiyup(size);
        size++;
    }

    void heapfiyup(int index){
        while(index>0){
            int parent = (index-1)/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else{
                break;
            }
        }
    }

    void deletion(){
        if(size == 0 ){
            cout<<"empty";
        }
        arr[0]=arr[size-1];
        size--;
        heapfiydown(0);
    }

    void heapfiydown(int index){
        while(true){
            int largest = index;
            int left = 2*index+1;
            int right = 2*index+2;

            if(left < size&& arr[left] > arr[largest]){
                largest = left ;
            }

            if(right < size&& arr[right] > arr[largest]){
                largest = right ;
            }

            if(largest != index){
                swap(arr[largest],arr[index]);
                index = largest; 
            }else{
                break;
            }
        }

    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    maxheap h;
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(35);
    h.insert(25);
    h.insert(70);
    cout << "Max Heap Elements: ";
    h.display();
    h.deletion();  
    cout << "After deletion: ";
    h.display();
    return 0;
};
