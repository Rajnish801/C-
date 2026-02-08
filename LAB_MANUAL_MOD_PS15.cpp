#include <iostream>
using namespace std;

int main() {
    bool result = ((10 + 5) * 2 > 20) && (30 - 10 == 20);
    cout << "The result of the expression is: " << boolalpha << result << endl;

    return 0;
}