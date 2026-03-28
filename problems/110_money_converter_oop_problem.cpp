#include <iostream>
using namespace std;

class CurrencyConverter {
private:
    float rupees;
    float USD;
    float exchangeRate;

public:
    // Constructor
    CurrencyConverter(float r,float u) {
        rupees = r;
        USD = u;
        exchangeRate = 83.0;  
    }

    float convertToUSD() {
        return rupees / exchangeRate;
    }

     float convertToRupee() {
        return USD* exchangeRate;
    }

    void display1() {
        cout << "converted rupee to USD: " << convertToUSD() << endl;
    }

      void display2() {
        cout << "coveted USD to Rupees: " << convertToRupee() << endl;
    }
};

int main() {
    float amount1;
    float amount2;
    
    cout << "Enter amount in Rupees: ";
    cin >> amount1;

    cout << "Enter amount in USD: ";
    cin >> amount2;

    CurrencyConverter obj(amount1,amount2);

    obj.display1();
    obj.display2();
    return 0;
}