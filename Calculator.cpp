#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Variables
    string operation;
    double number1, number2;

    // User Input
    cout << "Enter inital number: ";
    cin >> number1;
        cout << "Which operation= (+ - * /): ";
    cin >> operation;
        cout << "Enter second number: ";
    cin >> number2;


    // check operation
    if (operation == "+")
    {
        cout << number1 + number2;
    } else if (operation == "-") {
        cout << number1 - number2;
    } else if (operation == "*") {
        cout << number1 * number2;
    } else if (operation == "/") {
        cout << number1 / number2;
    } else 
    {
        cout << "Invalid operation";
    }
    


    return 0;
}
