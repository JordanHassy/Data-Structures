#include <iostream>
using namespace std;

int main() {
    cout << "This program computes the area of a triangle.\n\n";
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "\nThe area is " << (.5*base*height) << endl;
}