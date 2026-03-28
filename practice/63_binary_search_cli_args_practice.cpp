#include <iostream>
#include <cstdlib>   
using namespace std;
class BinarySearch {
private:
    int n;
    int arr[100];
public:
    void input(int argc, char* argv[]) {
        n = atoi(argv[1]);  

        for (int i = 0; i < n; i++) {
            arr[i] = atoi(argv[i + 2]); 
        }
    }

    void search(int key) {
        int low = 0, high = atoi(argv[argc - 1]), mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;              
        else if (arr[mid] < key)
            low = mid + 1;  
        else
            high = mid - 1;  
    }

        cout << "Element not found" << endl;
    }
};

int main(int argc, char* argv[]) {

    if (argc < 3) {
        cout << "Usage: program n elements... key\n";
        return 0;
    }

    BinarySearch obj;
    obj.input(argc, argv);

    int key = atoi(argv[argc - 1]);  
    obj.search(key);

    return 0;
}
