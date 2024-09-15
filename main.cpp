#include <iostream>
using namespace std;

int main() {
    // Display your name
    cout << "Greg\n";

    // Declare variables for base and height of the triangle
    float base, height;

    // Ask user to input the base and height
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate the area of the triangle
    float area = 0.5 * base * height;

    // Display the area
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
