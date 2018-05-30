//Assignment 30
//Josh Long
//CS-110

#include <iostream>

using namespace std;

double calculate (char oper, double num1, double num2, double result)
{
    result = 0;

    if (oper == '+')
    {
        result = num1 + num2;
    }

    else if (oper == '-')
    {
        result = num1 - num2;
    }

    else if (oper == '*')
    {
        result = num1 * num2;
    }

    else if (oper == '/')
    {
        result = num1 / num2;
    }
    return result;
}

int main ()
{
    char oper;
    double num1, num2, result;

    cout << "This program is a calculator that will answer the problem you give it, when you are done enter the letter x in the operator box." << endl << endl;

    while (oper != 'x')
    {
        cout << "Enter operator (+,-,*,/): ";
        cin >> oper;

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "And the second number: ";
        cin >> num2;

        cout << endl << "The result is ";
        result = calculate (oper, num1, num2, result);
        cout << result;
        cout << endl << endl;
    }
}
