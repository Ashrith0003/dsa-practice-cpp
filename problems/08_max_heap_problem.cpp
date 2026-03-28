#include<iostream>
using namespace std;
class heapmax{
    int arr[100];
    int size;
public:
    heapmax(){
        size=0;
    }

    void insert(int value){
        size++;
        arr[size] = value;
        heapifyup(size);
        
    }

    int swap(int &a,int &b){
        int c =a;
        a=b;
        b=c;
    };

    void heapifyup(int index){
        while(index>1){
            int parent = (index)/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
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
};

int main() {
    heapmax h;
    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(35);
    h.insert(25);
    h.insert(70);
    cout << "Max Heap Elements: ";
    h.display();
    return 0;
}
