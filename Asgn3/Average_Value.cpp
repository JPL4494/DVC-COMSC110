//Assignment 3
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    double v1, v2, v3, sum, average;

    cout << "This program will find the sum and average value of three numbers\n\n";

    cout << "Number One: ";
    cin >> v1;

    cout << "Number Two: ";
    cin >> v2;

    cout << "Number Three: ";
    cin >> v3;

    sum = v1 + v2 + v3;

    average = (v1 + v2 + v3) / 3;

    cout << "\nThe sum of your three numbers " << v1 << " , " << v2 << " and " << v3 << " is " << sum << ".\n";

    cout << "The average of your three numbers " << v1 << " , " << v2 << " and " << v3 << " is " << average << ".\n";

}
