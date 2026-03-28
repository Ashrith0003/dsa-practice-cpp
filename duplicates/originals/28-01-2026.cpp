// #include<iostream>
// using namespace std;
// class bank{
// private:
//     int balance;
// public:
//     bank(int r){
//         balance = r;
//     }

//     int deposit(int amt){
//         if(amt > 0){
//             balance +=amt;
//         }
//     }

//     int withdaraw(int amt){
//         if(amt <= balance){
//             balance -= amt;
//         }
//     }

//     int getbalance(){
//         return balance;
//     }
// };

// int main(){
//     bank s1(1000);
//     s1.deposit(500);
//     cout<<"The balance is :"<<s1.getbalance()<<endl;
//     s1.withdaraw(1000);
//     cout<<"The balance is :"<<s1.getbalance()<<endl;
//     return 0;

// #include <iostream>
// #include <cstdlib>   
// using namespace std;
// class LinearSearch {
// private:
//     int n;
//     int arr[100];
// public:
//     void input(int argc, char* argv[]) {
//         n = atoi(argv[1]);  

//         for (int i = 0; i < n; i++) {
//             arr[i] = atoi(argv[i + 2]); 
//         }
//     }

//     void search(int key) {
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == key) {
//                 cout << "Element found at index " << i << endl;
//                 return;
//             }
//         }
//         cout << "Element not found" << endl;
//     }
// };

// int main(int argc, char* argv[]) {

//     if (argc < 3) {
//         cout << "Usage: program n elements... key\n";
//         return 0;
//     }

//     LinearSearch obj;
//     obj.input(argc, argv);

//     int key = atoi(argv[argc - 1]);  
//     obj.search(key);

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>   
// using namespace std;
// class BinarySearch {
// private:
//     int n;
//     int arr[100];
// public:
//     void input(int argc, char* argv[]) {
//         n = atoi(argv[1]);  

//         for (int i = 0; i < n; i++) {
//             arr[i] = atoi(argv[i + 2]); 
//         }
//     }

//     void search(int key) {
//         int low = 0, high = atoi(argv[argc - 1]), mid;

//     while (low <= high) {
//         mid = (low + high) / 2;

//         if (arr[mid] == key)
//             return mid;              
//         else if (arr[mid] < key)
//             low = mid + 1;  
//         else
//             high = mid - 1;  
//     }

//         cout << "Element not found" << endl;
//     }
// };

// int main(int argc, char* argv[]) {

//     if (argc < 3) {
//         cout << "Usage: program n elements... key\n";
//         return 0;
//     }

//     BinarySearch obj;
//     obj.input(argc, argv);

//     int key = atoi(argv[argc - 1]);  
//     obj.search(key);

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <algorithm>
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

        sort(arr, arr + n); 
    }

    void search(int key) {
        int low = 0, high = n - 1, mid;

        while (low <= high) {
            mid = (low + high) / 2;

            if (arr[mid] == key) {
                cout << "Element found at index: " << mid << endl;
                return;
            }
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        cout << "Element not found" << endl;
    }
};

int main(int argc, char* argv[]) {
    if (argc < 4) {
        cout << "Usage: program n elements... key" << endl;
        return 0;
    }

    BinarySearch obj;
    obj.input(argc, argv);

    int key = atoi(argv[argc - 1]);
    obj.search(key);

    return 0;
}
