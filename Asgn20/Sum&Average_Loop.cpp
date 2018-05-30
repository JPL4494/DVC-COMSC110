//Assignment 20
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    double number, sum, count, average;

    cout << "This program will add the amount of numbers that you choose and then find their average.\n";
    cout << "To stop entering numbers just enter 'q' instead of a number\n";

    sum = 0;
    count = 1;
    average = 0;

    cout << "Enter number " << count << ": ";
    cin >> number;

    while (cin)
    {
        sum = sum + number;

        cout << "Enter number " << count +  1 << ": ";
        cin >> number;


        count = count + 1;

    }

    average = sum / (count - 1);

    cout << endl << "The sum of the numbers you entered is " << sum << endl;
    cout << "Their average is " << average << endl;
    cout << "The amount of numbers entered is " << (count - 1) << endl;
}
