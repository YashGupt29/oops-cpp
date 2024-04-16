#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rectangle;
    double length, width;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    rectangle.setDimensions(length, width);

    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;
    cout << "Perimeter of the rectangle: " << rectangle.calculatePerimeter() << endl;

    return 0;
}

