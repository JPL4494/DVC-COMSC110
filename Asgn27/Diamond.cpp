//Assignment 27
//Josh Long
//Comsc-110

#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
    int total, half, current, s, space, count, c;
    char pattern;

    cout << "This program will display a diamond pattern of a letter that you enter\n";
    cout << "Like this:\nLeter: x    Times: 3\n";
    cout << " x\nxxx\n x\n";

    while (total > 0)
    {

        cout << endl << "Times: ";
        cin >> total;

        while (total > 0)
        {
          cout << "Letter: ";
          cin >> pattern;
          break;
        }

        if ((total % 2) == 0)
        {
            total = (total + 1);
        }

        for (current = 1; current <= total; current++)
        {
            half = (total + 1) / 2;
            space = abs (half - current);
            count = total - (2 * space);

            for (s = 1; s <= space; s++)
            {
                cout << " ";
            }
            for (c = 1; c <= count; c++)
            {
                cout << pattern;
            }
            cout << endl;
        }
    }

    cout << endl << "Bye" << endl;
}
