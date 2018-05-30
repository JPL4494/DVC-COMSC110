//Assignment 35
//Josh Long
//CS-110

#include <iostream>

using namespace std;

double compute (double num1, double num2, char oper, double result)
{
    switch (oper)
    {
        case '+': result = num1 + num2;
        cout << endl << "Result: " << result << endl << endl;
        break;
        case '-': result = num1 - num2;
        cout << endl << "Result: " << result << endl << endl;
        break;
        case '*': result = num1 * num2;
        cout << endl << "Result: " << result << endl << endl;
        break;
        case '/': result = num1 / num2;
        cout << endl << "Result: " << result << endl << endl;
        break;
        default: cout << "Error: Operation is invalid\n\n";
    }

    return result;
}


int main()
{
    double num1, num2, result;
    char oper;

    cout << "This program will take in two numbers you supply\n" << "Then it will display what you wish to calculate\n" << "Enter x to exit\n\n";

    cout << "Enter operator: ";
    cin >> oper;

    while (oper != 'x')
    {
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;

        compute (num1, num2, oper, result);

        cout << "Enter operator: ";
        cin >> oper;

    }
    cout << endl << endl << "Bye" << endl;
}
