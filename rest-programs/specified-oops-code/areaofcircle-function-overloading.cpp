#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Function to calculate area of triangle
    float calculateArea(float base, float height) {
        return 0.5 * base * height;
    }

    // Function to calculate area of circle
    float calculateArea(float radius) {
        return 3.14159 * radius * radius;
    }

    // Function to calculate area of rectangle
    float calculateArea(float length, float width) {
        return length * width;
    }
};

int main() {
    AreaCalculator calc;

    // Calculate and display area of triangle
    cout << "Area of triangle: " << calc.calculateArea(5.0f, 6.0f) << endl;

    // Calculate and display area of circle
    cout << "Area of circle: " << calc.calculateArea(3.0f) << endl;

    // Calculate and display area of rectangle
    cout << "Area of rectangle: " << calc.calculateArea(4.0f, 7.0f) << endl;

    return 0;
}

