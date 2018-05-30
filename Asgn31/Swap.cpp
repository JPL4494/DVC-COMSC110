//Assignment 31
//Josh Long
//CS-110

#include <iostream>

using namespace std;

double swap1(double num1, double num2)
{
    double temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    return num1;
    return num2;
}

double swap2(double & num1, double & num2)
{
    double temp;

    temp = num2;
    num2 = num1;
    num1 = temp;

    return num1;
    return num2;
}

int main()
{
    double num1, num2;

    cout << "This program will take in two numbers you supply and display them in two \ndifferent ways\n\n";

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << endl << endl << "The first number is " << num1;
    cout << endl << "The second number is " << num2;

    cout << endl << endl << "Calling method swap1" << endl << "Return from method swap1";

    cout << endl << "The first number is ";
    swap1(num1, num2);
    cout << num1;
    cout << endl << "The second number is ";
    cout << num2;

    cout << endl << endl << "Calling method swap2" << endl << "Return from method swap2";

    cout << endl << "The first number is ";
    num1 = swap2(num1, num2);
    cout << num1;

    cout << endl << "The second number is ";
    num2 = swap2(num1, num2);
    cout << num2;

    cout << endl << endl << "Bye" << endl;
}
