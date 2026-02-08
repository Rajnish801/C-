#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: " << "\n";
    cin >> ch;
    int ASCIIvalue = static_cast<int>(ch);
    cout << "The ASCII value of " << ch << " is " << ASCIIvalue << endl;

    return 0;
}