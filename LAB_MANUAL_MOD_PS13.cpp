#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;
    if (angle1 + angle2 < 180 && angle1 > 0 && angle2 > 0) {
        angle3 = 180 - (angle1 + angle2);

        cout << "The third angle of the triangle is: " << angle3 << " degrees" << endl;
    } 
    else {
        cout << "Error: The angles entered do not form a valid triangle." << endl;
    }

    return 0;
}