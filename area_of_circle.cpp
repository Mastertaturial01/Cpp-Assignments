// Program to calculate area of a circle using OOP
// Author: Asim

#include <iostream>
using namespace std;

// Class definition
class Circle {
private:
    double radius; // private data member

public:
    // Method to input the radius
    void input() {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    // Method to calculate and return the area
    double calculateArea() {
        const double PI = 3.14159;
        return PI * radius * radius;
    }

    // Method to display the area
    void displayArea() {
        cout << "Area of the circle is: " << calculateArea() << endl;
    }
};

int main() {
    Circle c;        // create an object of Circle
    c.input();       // call input method
    c.displayArea(); // call displayArea method

    return 0;
}

