#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle circle;
    double radius;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    circle.setRadius(radius);

    cout << "Area of the circle: " << circle.calculateArea() << endl;
    cout << "Circumference of the circle: " << circle.calculateCircumference() << endl;

    return 0;
}

