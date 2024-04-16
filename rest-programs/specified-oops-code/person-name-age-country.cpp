#include <iostream>
using namespace std;

class Person {
private:
    char name[50];
    int age;
    char country[50];

public:
    void setData(const char* n, int a, const char* c) {
        strcpy(name, n);
        age = a;
        strcpy(country, c);
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Person person;
    char name[50], country[50];
    int age;

    cout << "Enter name, age, and country: ";
    cin >> name >> age >> country;

    person.setData(name, age, country);
    person.displayData();

    return 0;
}

