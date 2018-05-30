//Assignment 24
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int start, stop, total;

    cout << "This program will find the factorial of a number you enter, as long as it is\n" << "greater than 0 and is a whole number\n\n";

    cout << "Enter number: ";
    cin >> stop;

    total = 1;

    while (stop >= 0)
    {

      for (start = 1; start <= stop; start++)
        {
          total = total * start;
        }

        cout << "The factorial of " << stop << " is " << total << endl << endl;

        cout << "Enter number: ";
        cin >> stop;

        total = 1;

    }
}
