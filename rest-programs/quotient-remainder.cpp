#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;
    cout << "Enter dividend and divisor: ";
    cin >> dividend >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
    return 0;
}

