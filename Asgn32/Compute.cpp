//Assignment 32
//Josh Long
//CS-110

#include <iostream>

using namespace std;

double compute (double num1, double num2, double & sum, double & diff, double & prod, double & quot)
{
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;

    return sum;
    return diff;
    return prod;
    return quot;
}


int main()
{
    double num1, num2, sum, diff, prod, quot;

    cout << "This program will take in two numbers you supply\n" << "Then it will display their sum, difference, product then quotient\n" << "Enter x to exit\n\n";

    while (cin)
    {
        cout << "Enter number 1: ";
        cin >> num1;
        if (cin)
        {
        cout << "Enter number 2: ";
        cin >> num2;

        cout << endl << "The first number is " << num1;
        cout << endl << "The second number is " << num2;
        compute (num1, num2, sum, diff, prod, quot);
        cout << endl << "Sum: " << sum;
        cout << endl << "Difference: " << diff;
        cout << endl << "Product: " << prod;
        cout << endl << "Quotient: " << quot << endl << endl;
        }


    }
    cout << endl << endl << "Bye" << endl;
}
