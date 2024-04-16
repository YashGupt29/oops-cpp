#include <iostream>
using namespace std;

class Student {
private:
    char name[50];
    char branch[50];
    int rollNo;
    int age;
    char sex;
    int marks[5];

public:
    void setData(const char* n, const char* b, int roll, int a, char s, int m[]) {
        strcpy(name, n);
        strcpy(branch, b);
        rollNo = roll;
        age = a;
        sex = s;
        for (int i = 0; i < 5; ++i) {
            marks[i] = m[i];
        }
    }

    float calculatePercentage() {
        float total = 0.0f;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return (total / 5.0f);
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
    }
};

int main() {
    Student students[3];

    students[0].setData("John", "Computer Science", 101, 20, 'M', {80, 75, 85, 90, 88});
    students[1].setData("Alice", "Electrical Engineering", 102, 22, 'F', {70, 65, 72, 78, 75});
    students[2].setData("Bob", "Mechanical Engineering", 103, 21, 'M', {85, 80, 82, 78, 90});

    for (int i = 0; i < 3; ++i) {
        float percentage = students[i].calculatePercentage();
        if (percentage > 70.0f) {
            cout << "Student Name: " << students[i].name << ", Percentage: " << percentage << "%" << endl;
        }
    }

    return 0;
}

