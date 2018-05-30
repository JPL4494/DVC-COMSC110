//Assignment 4
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main()
  {
      double dc, df, dk, deg, cc, fc, kc;

      cout << "This is a degree conveter\n";
      cout << "To convert Centigrade, press 1, Farenheit, 2, Kelvin, 3\n";
      cin >> deg;

      if (deg == 1)
       {
           cout << "To convert Centigrade to Farenheit, press 1, Kelvin, 2\n";
           cin >> cc;

           if (cc == 1)
            {
                cout << "Enter the degrees Centigrade\n";
                cin >> dc;

                df = ((9.0 * dc) / 5.0) + 32;

                cout << dc << " degrees Centigrade in Farenheit is " << df << " degrees";
            }

            else if (cc == 2)
             {
                cout << "Enter the degrees Centigrade\n";
                cin >> dc;

                dk = dc + 273.15;

                cout << dc << " degrees Farenheit in Kelvin is " << dk << " degrees";
             }
       }

       else if (deg == 2)
       {
           cout << "To convert Farenheit to Centigrade, press 1, Kelvin, 2\n";
           cin >> fc;

           if (fc == 1)
            {
                cout << "Enter the degrees Farenheit\n";
                cin >> df;

                dc = ((df-32) * (5.0 / 9.0));

                cout << df << " degrees Farenheit in Centigrade is " << dc << " degrees";
            }

            else if (fc == 2)
             {
                cout << "Enter the degrees Farenheit\n";
                cin >> dc;

                df = ((dc-32) * (5.0 / 9.0));

                dk = df + 273.15;

                cout << dc << " degrees Farenheit in Kelvin is " << dk << " degrees";
             }
    }

       else if (deg == 3)
       {
           cout << "To convert Kelvin to Centigrade, press 1, Farenheit, 2\n";
           cin >> kc;

           if (kc == 1)
            {
                cout << "Enter the degrees Kelvin\n";
                cin >> dk;

                dc = dk - 273.15;

                cout << dk << " degrees Kelvin in Centigrade is " << dc << " degrees";
            }

            else if (kc == 2)
             {
                cout << "Enter the degrees Kelvin\n";
                cin >> dk;

                dc = dk - 273.15;

                df = ((9.0 * dc) / 5.0) + 32;

                cout << dk << " degrees Kelvin in Farenheit is " << df << " degrees";
            }
    }



    return 1;
}
