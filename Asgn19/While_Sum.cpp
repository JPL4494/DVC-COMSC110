//Assignment 19
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int count, total;
    double sum, number;

    cout << "This program will add the amount of numbers that you specify.\n";
    cout << "How many numbers do you want add?\n";
    cin >> total;

    sum = 0;
    count = 0;

    while (count < total)
    {
        cout << "Enter number " << count + 1 << ": ";
        cin >> number;

        sum = sum + number;

        count = count + 1;
    }

    cout << endl << "The sum of the numbers you entered is " << sum << endl;
}
