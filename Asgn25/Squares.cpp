//Assignment 25
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int start, stop, square, sum;

    cout << "This program will square the numbers between two that you enter and their sum\n";

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

    while (start > 0 || stop > 0)
    {
      sum = 0;

      for (square = 0; start <= stop; start++)
        {
          square = start * start;
          sum = sum + square;

          cout << start << " squared is equal to " << square << endl;
        }

        cout << "And their sum is " << sum << endl;

        cout << endl << "Enter number one: ";
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
    }

    cout << "Bye";
}
