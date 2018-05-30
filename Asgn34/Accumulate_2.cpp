//Assignment 34
//Josh Long
//CS-110

#include <iostream>

using namespace std;

double compute (double num, char oper, double result)
{
    switch (oper)
    {
        case '+': result = result + num;
        break;
        case '-': result = result - num;
        break;
        case '*': result = result * num;
        break;
        case '/': result = result / num;
        break;
        default: cout << "Error: Operation is invalid\n\n";
    }

    return result;
}


int main()
{
    double num, result;
    char oper;

    cout << "This program will take accumulate numbers you supply\n" << "It will do what operation you specify\n" << "Enter x to exit\n\n";

    result = 0;
    cout << "Accumulated value: " << result << endl << endl;

    cout << "Enter operator: ";
    cin >> oper;

    while (oper == '+' || oper == '-' || oper == '*' || oper == '/')
    {
        cout << "Enter number: ";
        cin >> num;

        result = compute (num, oper, result);

        cout << "Accumulated value: " << result << endl << endl;

        cout << "Enter operator: ";
        cin >> oper;

    }
    cout << endl << endl << "Bye" << endl;
}
