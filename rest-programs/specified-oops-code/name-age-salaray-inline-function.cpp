#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[50];
    char address[100];
    int age;
    float salary;

public:
    void setData(const char* n, const char* addr, int a, float sal) {
        strcpy(name, n);
        strcpy(address, addr);
        age = a;
        salary = sal;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person person;

    person.setData("John Doe", "123 Main St", 30, 50000.0f);
    person.displayData();

    return 0;
}

