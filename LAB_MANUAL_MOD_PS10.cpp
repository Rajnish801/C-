#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a Vowel." << endl;
        } 
        else {
            cout << ch << " is a Consonant." << endl;
        }
    } 
    else {
        cout << "Error: The character is not an alphabetic letter." << endl;
    }

    return 0;
}