#include <iostream>
using namespace std;

int main() {

    bool result = (25 / 5 + 3 * 2 <= 15) || (!(8 - 3 > 10));
    cout << "The result of the expression is: " << boolalpha << result << endl;

    return 0;
}