// Program to determine if number is positive, negative, or zero using OOP
// Author: Asim

#include <iostream>
using namespace std;

// Class definition
class NumberChecker {
private:
    int number; // private data member

public:
    // Method to input the number
    void input() {
        cout << "Enter a number: ";
        cin >> number;
    }

    // Method to check and display if number is positive, negative, or zero
    void checkNumber() {
        if (number > 0) {
            cout << "The number is positive." << endl;
        } else if (number < 0) {
            cout << "The number is negative." << endl;
        } else {
            cout << "The number is zero." << endl;
        }
    }
};

int main() {
    NumberChecker obj; // create an object of NumberChecker
    obj.input();       // call input method
    obj.checkNumber(); // call checkNumber method
    
    return 0;
}

