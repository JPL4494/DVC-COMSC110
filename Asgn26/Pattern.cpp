//Assignment 26
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int stop, a, b, x, y;
    char pattern;

    cout << "This program will display a pattern of a letter that you enter so many times in this manner\n";
    cout << "Leter: x    Times: 3\n";
    cout << "x\nxx\nxxx\n\nxxx\nxx\nx\n";

    while (stop > 0)
    {

        cout << endl << "Times: ";
        cin >> stop;

        while (stop > 0)
        {
          cout << "Letter: ";
          cin >> pattern;
          break;
        }

      for (a = 0; a < stop; a++)
        {
          for (b = 0; b < stop; b++)

              if (b <= a)

                  cout << pattern;
                   cout << endl;
        }

        cout << endl;

        for (x = 0; x < stop; x++)
        {
            for (y = 0; y < stop; y++)

                if (x <= y)

                    cout << pattern;
                     cout << endl;
        }

    }

    cout << endl << "Bye";
}
