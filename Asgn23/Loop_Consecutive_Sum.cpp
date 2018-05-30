//Assignment 23
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int start, stop, sum, count;

    cout << "This program will add all the integers between two numbers you specify\n";

    cout << "Enter number one: ";
    cin >> start;

    cout << "Enter number two: ";
    cin >> stop;

    if (start > stop)
    {
        int temp;
        temp = start;
        start = stop;
        stop = temp;
    }

    sum = 0;

    for (count = start; count <= stop; count++)
    {
        sum = sum + count;
    }

    cout << endl << "The sum of the numbers between " << start << " and " << stop << " is " << sum << endl;
}
