#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        quotient = dividend / divisor;
        remainder = dividend % divisor;

        cout << "Quotient = " << quotient << endl;
        cout << "Remainder = " << remainder << endl;
    }

    return 0;
}