#include <iostream>
#include <limits> // Required for numeric_limits

using namespace std;

int main()
{
    double num1, num2;

    cout << "Enter the first number: ";

    while (!(cin >> num1)) 
    {
        cout << "Invalid input. Please enter a numeric value: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    cout << "Enter the second number: ";
    while (!(cin >> num2))
    {
        cout << "Invalid input. Please enter a numeric value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "\n--- Results ---" << endl;
    cout << "Addition (+):       " << (num1 + num2) << endl;
    cout << "Subtraction (-):    " << (num1 - num2) << endl; 
    cout << "Multiplication (*): " << (num1 * num2) << endl; 

    if (num2 != 0)
    {
        cout << "Division (/):       " << (num1 / num2) << endl;
    }
    else
    {
        cout << "Division (/):       Error! Cannot divide by zero." << endl;
    }

    return 0;
}