#include <iostream>
#include <cstdlib>   
using namespace std;
class LinearSearch {
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
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found" << endl;
    }
};

int main(int argc, char* argv[]) {

    if (argc < 3) {
        cout << "Usage: program n elements... key\n";
        return 0;
    }

    LinearSearch obj;
    obj.input(argc, argv);

    int key = atoi(argv[argc - 1]);  
    obj.search(key);

    return 0;
}
